/*
* main processes idea originally from: 
*   http://www.blackwasp.co.uk/NumberToWords_2.aspx
*/
#pragma once

#include <string>
#include "RawNumber.hpp"
#include "GroupedNumber.hpp"
#include "GroupedNumberWords.hpp"
#include "NumberWordsDictionary.hpp"

const int ZERO = 0;

class NumberToWordsHandler
{
public:
    std::string Handle(std::string const& number_as_string, NumberWordsDictionary number_words_dictionary);

private:
    // TODO NumberWordsDictionary  field
    RawNumber ParseRawNumber(const std::string& number_as_string);
    std::string FindZeroWord(const NumberWordsDictionary& number_words_dictionary);
};