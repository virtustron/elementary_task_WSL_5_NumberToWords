#include "NumberToWordsHandler.hpp"
#include "NumberWordsDictionary.hpp"

/*
    1 Parse string to raw number
    2 Zero Rule
    3 Extract Three-Digit Group
    4 Converting a Three-Digit Group
        4.1 Applying The Hundreds Rules
        4.2 Applying The Tens Rules
    5 Recombining the Three-Digit Groups
    6 Applying the Negative Rule

    */

std::string NumberToWordsHandler::Handle(std::string number_as_string)
{
    std::string number_in_words = "";
    
    // 1z
    RawNumber raw_number = ParseRawNumber(number_as_string);

    // 2
    if (CanApplyZeroRule(raw_number))
    {
        number_in_words = ApplyZeroRule(raw_number);
        return number_in_words;
    }

    // 3
    GroupedNumber grouped_number(raw_number); 

    // 4 - 6
    NumberWordsDictionary number_words_dictionary;

    GroupedNumberWords grouped_number_words(grouped_number, number_words_dictionary);
    number_in_words = grouped_number_words.get_words();

    return number_in_words;
}


RawNumber NumberToWordsHandler::ParseRawNumber(std::string number_as_string)
{
    RawNumber raw_number;
    
    // TODO ParseRawNumber - implement Parser class
    // ...
    // number.set_number(...);
    raw_number.set_number(123456);
    
    return raw_number;
}


bool NumberToWordsHandler::CanApplyZeroRule(RawNumber raw_number)
{
    bool is_zero = (raw_number.get_number() == 0);
    
    return is_zero;
}

std::string NumberToWordsHandler::ApplyZeroRule(RawNumber raw_number)
{
    std::string number_in_words;
    
    // TODO create and use some kind of dictionary for Num2Words converting "zero"
    number_in_words = "Zero";

    return number_in_words;
}