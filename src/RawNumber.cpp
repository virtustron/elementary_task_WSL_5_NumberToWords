#include "RawNumber.hpp"

RawNumber::RawNumber(int number)
{
    set_number(number);
}

int RawNumber::get_number()
{
    return m_number;
}

void RawNumber::set_number(int number)
{
    m_number = number;
}