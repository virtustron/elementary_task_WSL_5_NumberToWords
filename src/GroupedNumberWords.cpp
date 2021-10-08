#include "GroupedNumberWords.hpp"

    GroupedNumberWords::GroupedNumberWords()
    {
        m_words = "";
    }

    GroupedNumberWords::GroupedNumberWords(GroupedNumber grouped_number, NumberWordsDictionary number_words_dictionary)
    
    {
        GroupedNumberWords();
        
        //m_grouped_number = grouped_number;
         m_words = ConvertGroupedNumberToWords(grouped_number, number_words_dictionary);
    }
    
    std::string GroupedNumberWords::get_words()
    {
        return m_words;
    }

    void GroupedNumberWords::ConvertGroupedNumberToWords()
    {
        m_words = ConvertGroupedNumberToWords(m_grouped_number, m_number_words_dictionary);
    }
    
    std::string GroupedNumberWords::ConvertGroupedNumberToWords(GroupedNumber m_grouped_number,
                                                                NumberWordsDictionary number_words_dictionary)
    {
        std::string number_in_words = "";
        
        // TODO implement ConvertGroupedNumberToWords
        //m_grouped_number.
        
        return number_in_words;
    }