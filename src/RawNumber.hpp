/*
*  Abstraction of "raw" (unprocessed) number value
*/

#pragma once

// TODO implement Template 
// template <typename T>
class RawNumber
{
public:
    RawNumber(int number = 0);
    int get_number();
    void set_number(int number);
private:
    int m_number;
};