#include "reader.h"

int Reader::_id(0);

Reader::Reader(std::string name) : reader_name(name), reader_id(_id) {
    ++_id;
}

std::string Reader::getName(){
    return  reader_name;
}

int Reader::getId() const { 
    return reader_id;
}

std::vector<int> Reader::getIssuedBook(){
    return reader_issuedBooks;
}
void Reader::setName(std::string name) {
    reader_name = name;

}

void Reader::setId(int id) {
    reader_id = id;
}


int main(){}