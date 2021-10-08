#pragma once

#include <vector>
#include <string>

// TODO implement dictionary class
class NumberWordsDictionary
{
public:
    NumberWordsDictionary(/* args */);
    ~NumberWordsDictionary();

private:
    std::vector<std::string> m_small_numbers_words;
    std::vector<std::string> m_tens_words;
    std::vector<std::string> m_scale_numbers_words;

    void InitSmallNumbersWords();
    void InitTensWords();
    void InitScaleNumbersWords();
};


