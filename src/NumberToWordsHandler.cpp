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

// TODO change to: const ref to string
std::string NumberToWordsHandler::Handle(std::string const& number_as_string, NumberWordsDictionary number_words_dictionary)
{
    std::string number_in_words = "";
    
    // 1
    RawNumber raw_number = ParseRawNumber(number_as_string);

    // 2
    if (raw_number.get_number() == ZERO)
    {
        number_in_words = FindZeroWord(number_words_dictionary);
        return number_in_words;
    }

    // 3
    GroupedNumber grouped_number(raw_number); 

    // 4 - 6
    GroupedNumberWords grouped_number_words(grouped_number, number_words_dictionary);
    number_in_words = grouped_number_words.get_words();

    return number_in_words;
}


RawNumber NumberToWordsHandler::ParseRawNumber(const std::string & number_as_string)
{
    RawNumber raw_number;
    
    // TODO ParseRawNumber - implement Parser class
    // ...
    // number.set_number(...);
    raw_number.set_number(123456);
    
    return raw_number;
}

std::string NumberToWordsHandler::FindZeroWord(const NumberWordsDictionary& number_words_dictionary)
{
    return number_words_dictionary.get_small_number_word(ZERO);
}