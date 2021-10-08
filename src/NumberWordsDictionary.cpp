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

std::string NumberWordsDictionary::get_small_number_word(const int small_number_value)
{
    std::string small_number_word;

    if ((small_number_value < 0) || (small_number_value > m_small_numbers_words.size()))
    {
        throw std::out_of_range("Index of small_number_word is out of range");
    }
        
    small_number_word = m_small_numbers_words[small_number_value];

    return small_number_word;
}

std::string NumberWordsDictionary::get_ten_word(const int ten_value)
{
    std::string ten_word;

    if ((ten_value < 0) || (ten_value > m_tens_words.size()))
    {
        throw std::out_of_range("Index of ten_word is out of range");
    }
        
    ten_word = m_small_numbers_words[ten_value];

    return ten_word;
}

std::string NumberWordsDictionary::get_scale_number_word(const int scale_number_value)
{
    std::string scale_number_word;

    if ((scale_number_value < 0) || (scale_number_value > m_scale_numbers_words.size()))
    {
        throw std::out_of_range("Index of scale_number_word is out of range");
    }
        
    scale_number_word = m_scale_numbers_words[scale_number_value];

    return scale_number_word;
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