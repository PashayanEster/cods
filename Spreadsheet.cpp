#include  "spreadsheet.h"
Spreadsheet::Spreadsheet()
    : m_ptr (nullptr)
    , m_rows()
    , m_cols()
{}

Spreadsheet::Spreadsheet(int rows, int cols) 
    : m_ptr(nullptr)
    , m_rows(rows)
    , m_cols(cols)
{}

void Spreadsheet::addRow(int rows) {
    Spreadsheetcell** tmp = new Spreadsheetcell*[m_rows + rows];
    for(int i = 0; i < m_rows + rows; ++i) {
        tmp[i] = new Spreadsheetcell[m_cols];
    }
    for(int i = 0; i < m_rows; ++i) {
        for(int j = 0; j < m_cols; ++j) {
            tmp[i][j] = m_ptr[i][j];
        }
    }
    for(int i = 0; i < m_rows; ++i) {
        delete[] m_ptr[i];
    }
    delete[] m_ptr;
    m_ptr = tmp;
    m_rows += rows;
}


void Spreadsheet::addColumn(int cols) {
    Spreadsheetcell** tmp = new Spreadsheetcell*[m_rows];
        for(int i = 0; i < m_rows; ++i) {
            tmp[i] = new Spreadsheetcell[m_cols + cols];
        }
        for(int i = 0; i < m_rows; ++i) {
            for(int j = 0; j < m_cols; ++j) {
                tmp[i][j] = m_ptr[i][j];
            }
        }
        for(int i = 0; i < m_rows; ++i) {
            delete[] m_ptr[i];
        }
        delete[] m_ptr;
        m_ptr = tmp;
        m_cols += cols;
}
        
void Spreadsheet::removeRow(int rows) {
    Spreadsheetcell** tmp = new Spreadsheetcell*[m_rows - rows];
        for(int i = 0; i < m_rows - rows; ++i) {
            tmp[i] = new Spreadsheetcell[m_cols];
        }
        for(int i = 0; i < m_rows - rows; ++i) {
            for(int j = 0; j < m_cols; ++j) {
                tmp[i][j] = m_ptr[i][j];
            }
        }
        for(int i = 0; i < m_rows; ++i) {
            delete[] m_ptr[i];
        }
        delete[] m_ptr;
        m_ptr = tmp;
        m_rows -= rows;
}

void Spreadsheet::removeColumn(int cols) {
    Spreadsheetcell** tmp = new Spreadsheetcell*[m_rows];
        for(int i = 0; i < m_rows; ++i) {
            tmp[i] = new Spreadsheetcell[m_cols - cols];
        }
        for(int i = 0; i < m_rows; ++i) {
            for(int j = 0; j < m_cols - cols; ++j) {
                tmp[i][j] = m_ptr[i][j];
            }
        }
        for(int i = 0; i < m_rows; ++i) {
            delete[] m_ptr[i];
        }
        delete[] m_ptr;
        m_ptr = tmp;
        m_cols -= cols;
}

void Spreadsheet::verifyCoord(int index_rows, int index_cols) {
    if(index_rows < 0 || index_rows >= m_rows) {
        throw std::out_of_range("Invalid index!");
    }
    if(index_cols < 0 || index_rows >= m_cols) {
        throw std::out_of_range("Invalid index!");
    }
}

Spreadsheetcell&& Spreadsheet::getCell(int index_rows, int index_cols) {
    verifyCoord(index_rows, index_cols);

    for(int i = 0; i < m_rows; ++i) {
        for(int j = 0; j < m_cols; ++j) {
            if(i == index_rows && j == index_cols) {
                return std::move(m_ptr[i][j]);
            }
        }
    }
    return Spreadsheetcell();
}
    
        
void Spreadsheet::setCell(int index_rows, int index_cols, const std::string& value)
{}

void Spreadsheet::print() const
{}
Spreadsheet::~Spreadsheet() {
    
}

Spreadsheet Spreadsheet::operator=(const Spreadsheet& other)
{Spreadsheetcell tmp(this -> m_rowsize+ other.m_roesize);
(this->m_colsize+ other.m_colsize);

int i = 0, j = 0;

for(int x = 0; x < m_row; ++x){
    for( int y = 0; y < this-> m_colsize; ++y){
if(!y) {j = 0;}
tmp[i++][j++]= (*this)[x][y];
}
}
for (int x = 0; x < other.m_rowsize; ++x){
    for( int y = 0; y < other.m_colsize; ++y){
        if(!y) {j = 0;}
        tmp[i++][j++] = other[x][y];
    }
}
return tmp;
}



Spreadsheet& Spreadsheet::operator+(const Spreadsheet& other){}

std::pair<Spreadsheetcell, Spreadsheetcell>& Spreadsheet::operator[](size_t index){}

// friend std::ostream& Spreadsheet::operator<<(std::ostream& cout, Spreadsheet& obj){}
    
//     private:
//         SpreadsheetCell** m_ptr;
//         int m_rows;    
//         int m_cols;
