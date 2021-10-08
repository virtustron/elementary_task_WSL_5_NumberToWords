#pragma once

#include <vector>
#include <string>
#include <stdexcept>

// TODO implement dictionary class
class NumberWordsDictionary
{
public:
    NumberWordsDictionary(/* args */);
    ~NumberWordsDictionary();

    std::string get_small_number_word(const int small_number_value);
    std::string get_ten_word(const int ten_value);
    std::string get_scale_number_word(const int scale_number_value);

private:
    std::vector<std::string> m_small_numbers_words;
    std::vector<std::string> m_tens_words;
    std::vector<std::string> m_scale_numbers_words;

    void InitSmallNumbersWords();
    void InitTensWords();
    void InitScaleNumbersWords();
};


