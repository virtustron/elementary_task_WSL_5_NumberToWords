#pragma once

#include <string.h>
#include "GroupedNumber.hpp"

class GroupedNumberWords
{
public:
    GroupedNumberWords();
    GroupedNumberWords(GroupedNumber grouped_number);
    std::string get_words();

private:
    GroupedNumber m_grouped_number;
    std::string m_words;
       
    void ConvertGroupedNumberToWords();
    std::string ConvertGroupedNumberToWords(GroupedNumber m_grouped_number);
};