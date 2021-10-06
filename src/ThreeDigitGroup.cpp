#include "ThreeDigitGroup.hpp"

ThreeDigitGroup::ThreeDigitGroup(const int digit_group)
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