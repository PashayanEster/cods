#ifndef READER_H
#define READER_H

#include "book.h"

#include <string>
#include <vector>

class Reader{
public:
    Reader(std::string name);
    int getId() const;
    std::string getName();
    std::vector<int> getIssuedBook();

    // void setId(int id);
    // void setName( std::string name);
    // void setIssuedBook(int a);



private: 
    static int _id;
    int reader_id;
    std::string reader_name;
    std::vector<int> reader_issuedBooks;//sovorakan popoxakan vector<int>
};
#endif //READER_H