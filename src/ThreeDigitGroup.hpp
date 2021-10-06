#pragma once

#include <stdexcept>

class ThreeDigitGroup
{
public:
    ThreeDigitGroup(const int digit_group);

private:
    int m_digit_group;
};