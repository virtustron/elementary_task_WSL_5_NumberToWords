#include "NumberWordsDictionary.hpp"

NumberWordsDictionary::NumberWordsDictionary(/* args */)
{
    InitSmallNumbersWords();
    InitTensWords();
    InitScaleNumbersWords();
}

NumberWordsDictionary::~NumberWordsDictionary()
{

}

void NumberWordsDictionary::InitSmallNumbersWords()
{
    m_small_numbers_words = {"Zero", "One", "Two", "Three", "Four", "Five", 
        "Six", "Seven", "Eight", "Nine", "Ten",
        "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", 
        "Sixteen", "Seventeen", "Eighteen", "Nineteen"};

}      

void NumberWordsDictionary::InitTensWords()
{
    m_tens_words = { "", "", "Twenty", "Thirty", "Forty", "Fifty", 
        "Sixty", "Seventy", "Eighty", "Ninety"};

}

void NumberWordsDictionary::InitScaleNumbersWords()
{
    m_scale_numbers_words = {"", "Thousand", "Million", "Billion"};
}