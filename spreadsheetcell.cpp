#include "spreadsheetcell.h"
Spreadsheetcell::Spreadsheetcell(){}//default constructor
Spreadsheetcell::Spreadsheetcell(const std::string& value) : m_value(value) {}//parametr. construct

// Copy constructor
Spreadsheetcell::Spreadsheetcell(const Spreadsheetcell& other) : m_value(other.m_value) {}



//copy assignment
Spreadsheetcell& Spreadsheetcell::operator=(const Spreadsheetcell& other) {
    if (this != &other) {
        m_value = other.m_value;
    }
    return *this;

}

// Move constructor
Spreadsheetcell::Spreadsheetcell(Spreadsheetcell&& other) : m_value(std::move(other.m_value)) {}


//move assignement 
Spreadsheetcell& Spreadsheetcell::operator=(Spreadsheetcell&& other) {
    if (this != &other) {
        m_value = std::move(other.m_value);
    }
    return *this;
}


Spreadsheetcell::~Spreadsheetcell(){};

// Set the value of the cell
void Spreadsheetcell::setValue(const std::string& value) {

    m_value = value;
}

// Get the value of the cell
const std::string Spreadsheetcell::getValue()const {
    return m_value;
}


// Get the integer representation of the cell value
int Spreadsheetcell::getInt() const 
    { std::stringstream buf(m_value);
int val;
buf>>val;
if (buf.fail())
{
    throw std::invalid_argument("");
    return val;}
}

    //return std::stoi(m_value);
    //int value = 0;

    //std::stringstream ss(m_value);
    // int val;
   // ss >> value;
    //if (ss.fail()) {
       // throw std::exception();
       // return 0;
   // }
  //  return value;}


Spreadsheetcell& operator++ ()
{
    int x  = getIntValue();
    m_value = std::move(std::to_string(++x));
    return *this;
}

// Get the double representation of the cell value
double Spreadsheetcell::getdouble() const {
    return std::stod(m_value);
}

// Conversion operator to int
Spreadsheetcell::operator int() {
    return getInt();
}

// Conversion operator to double
Spreadsheetcell::operator double() {
    return getdouble();
}

