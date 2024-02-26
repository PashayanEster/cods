#include "book.h"

//Book::Book() = default;
Book::Book() : m_id(0), m_title(""), m_author(""){}

Book::Book(int id, std::string title, std::string author) : m_id(id), m_title(title), m_author(author){}

Book::~Book(){}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                


int Book::getId() const {
    return m_id;
}

std::string Book::getTitle() const { 
    return m_title;
}

std::string Book::getAuthor() const {
    return m_author;
}

bool Book::getAvailability() const {
    return m_availability;
}
void Book::setId(int id) {
    m_id = id;
}

void Book::setTitle(std::string title) {
    m_title = title;
}

void Book::setAuthor(std::string author) {
    m_author = author;
}

void Book::setAvailability(bool b) {
    m_availability = b;
}
