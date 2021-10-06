#include "NumberToWordsHandler.hpp"

std::string NumberToWordsHandler::Handle(std::string number_as_string)
{
    std::string number_in_words;
    
    RawNumber raw_number = ParseRawNumber(number_as_string);

    if (CanApplyZeroRule(raw_number))
    {
        number_in_words = ApplyZeroRule(raw_number);
        return number_in_words;
    }

    GroupedNumber grouped_number(raw_number); 

    // TODO MAIN TASK - continue handler process

}

RawNumber NumberToWordsHandler::ParseRawNumber(std::string number_as_string)
{
    RawNumber raw_number;
    
    // TODO ParseRawNumber - implement Parser class
    // ...
    // number.set_number(...);
    
    return raw_number
}

std::string ApplyZeroRule(RawNumber raw_number)
{
    std::string number_in_words;
    
    // TODO create and use some kind of dictionary for Num2Words converting "zero"
    number_in_words = "Zero";

    return number_in_words;
}