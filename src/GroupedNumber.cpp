#include "GroupedNumber.hpp"

GroupedNumber::GroupedNumber()
{
    m_is_negative = false;
}

GroupedNumber::GroupedNumber(RawNumber raw_number) : GroupedNumber()
{
    // here must be abstraction of "int" number
    int number = raw_number.get_number();

    // m_is_negative = (number < 0);
    if (number < 0)
    {
        m_is_negative = true;
        number = -number;         
    }
    else
    {
        m_is_negative = false;
    }    

    ExtractThreeDigitGroups(number);
}

void GroupedNumber::ExtractThreeDigitGroups(int number)
{
    for (int i = 0; i < 4; i++)
    {
        m_digit_groups[i] = number % 1000;
        number /= 1000;
    }

}

