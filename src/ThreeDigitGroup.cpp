#include "ThreeDigitGroup.hpp"

ThreeDigitGroup::ThreeDigitGroup()
{
    m_digit_group = 0;
}

ThreeDigitGroup::ThreeDigitGroup(const int digit_group) : ThreeDigitGroup()
{
    try {
        set_digit_group(digit_group);  
    }
    catch( const std::invalid_argument& e ) {
        // do something
        throw;
    }
}

void ThreeDigitGroup::set_digit_group(const int digit_group)
{
    if (digit_group > 999)
    {
        throw std::invalid_argument("Received more than 3-digits value");
    }

    if (digit_group < 0)
    {
        throw std::invalid_argument("Received negative value");
    }

    m_digit_group = digit_group;
}