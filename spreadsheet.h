
#ifndef SPREADSHEET_H
#define SPREADSHEET_H
#include <iostream>
#include "spreadsheetcell.h"
#include <utility>

class Spreadsheet {
public:

        Spreadsheet();
        Spreadsheet (int rows, int cols);
        void addRow(int rows);
        void addColumn(int);
        void removeRow(int rows);
        void removeColumn(int cols);
        void verifyCoord(int index_rows, int index_cols);
        Spreadsheetcell& getCell(int index_rows, int index_cols);
        const Spreadsheetcell& getCell(int, int)const;
        void setCell(int Index_rows, int index_cols, const std::string& value);
        void print() const;
        void verifiycoord(int, int)const;

        ~Spreadsheet();
    
        Spreadsheet& operator=(const Spreadsheet& other);
        Spreadsheet operator+(const Spreadsheet& other);
        Spreadsheet& operator = (Spreadsheet&&);
        Spreadsheetcell* operator[](int);
        std::pair<Spreadsheetcell, Spreadsheetcell>& operator[] (size_t index);
};
        std::ostream& operator<<(std::ostream& cout,const Spreadsheet&);

    private:


        Spreadsheetcell** m_matrix;
        int m_rowssize;
        int m_colsize;



#endif // SPREADSHEET_H
