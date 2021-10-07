#pragma once

#include <array>
#include "RawNumber.hpp"
#include "ThreeDigitGroup.hpp"

const int COUNT_THREE_DIGIT_GROUPS_FOR_INT_NUMBER = 4; // because of: INT_MAX == 2 147 483 647 

class GroupedNumber
{
public:
    GroupedNumber();
    GroupedNumber(RawNumber raw_number);

private:
    bool m_is_negative;
    ThreeDigitGroup m_digit_groups[COUNT_THREE_DIGIT_GROUPS_FOR_INT_NUMBER];
       
    void ExtractThreeDigitGroups(int number);
};