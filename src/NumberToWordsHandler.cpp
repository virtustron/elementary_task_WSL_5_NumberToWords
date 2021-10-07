#include "NumberToWordsHandler.hpp"

/*
    - Parse string to raw number
    - Zero Rule
    - Extract Three-Digit Group
    - Converting a Three-Digit Group
        -- Applying The Hundreds Rules
        -- Applying The Tens Rules
    - Recombining the Three-Digit Groups
    - Applying the Negative Rule

    */

std::string NumberToWordsHandler::Handle(std::string number_as_string)
{
    std::string number_in_words = "";
    
    RawNumber raw_number = ParseRawNumber(number_as_string);

    if (CanApplyZeroRule(raw_number))
    {
        number_in_words = ApplyZeroRule(raw_number);
        return number_in_words;
    }

    GroupedNumber grouped_number(raw_number); 

    // TODO MAIN TASK - continue handler process
    //GroupedString
    
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