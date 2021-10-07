#pragma once

#include <stdexcept>

class ThreeDigitGroup
{
public:
    ThreeDigitGroup();
    ThreeDigitGroup(const int digit_group);

private:
    int m_digit_group;
    void set_digit_group(const int digit_group);
};