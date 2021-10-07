/*
* main processes idea originally from: 
*   http://www.blackwasp.co.uk/NumberToWords_2.aspx
*/
#pragma once

#include <string>
#include "RawNumber.hpp"
#include "GroupedNumber.hpp"
#include "GroupedNumberWords.hpp"

class NumberToWordsHandler
{
public:
    std::string Handle(std::string number_as_string);

private:
    RawNumber ParseRawNumber(std::string number_as_string);
    bool CanApplyZeroRule(RawNumber raw_number);
    std::string ApplyZeroRule(RawNumber raw_number);
};