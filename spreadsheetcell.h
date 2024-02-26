#ifndef SPREADSHEETCELL_H
#define SPREADSHEETCELL_H
#include <iostream>
#include <sstream>
class Spreadsheetcell
{
    public:
Spreadsheetcell();
Spreadsheetcell(const std::string& m_value);
Spreadsheetcell(const Spreadsheetcell& other);
Spreadsheetcell(Spreadsheetcell&& other);
// ~Spreadsheetcell();
Spreadsheetcell& operator = (const Spreadsheetcell& other);
Spreadsheetcell& operator = (Spreadsheetcell&& other);



void setValue(const std::string& value);
const std::string getValue()const;


// functions 
int getInt()const;
double getdouble()const;


Spreadsheetcell& operator++ ();

 // Conversion operators
operator int();//int getValue()const;
operator double();//doubleValue()const;

~Spreadsheetcell();
private:
    std::string m_value;
};
#endif //shpreadsheetcell