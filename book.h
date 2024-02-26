#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book{
public:
Book ();
Book(int id, std::string title, std::string author);
~Book ();
int getId() const;
std::string getTitle() const;
std::string getAuthor() const;
bool getAvailability() const;

void setId(int id);
void setTitle(std::string title);
void setAuthor(std::string author);
void setAvailability(bool);            bbvbv                                                                                                                                                                                                                    

private:
    int m_id;
    std::string m_title;
    std::string m_author;
    bool m_availability;
};




#endif //BOOK_H