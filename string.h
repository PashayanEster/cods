#ifndef STRING_H
#define STRING_H
#include <string>
#include <utility>
#include <cstring>

class String{
private:
    int m_size;
    char* ptr;
public:
    String();
    String(const char* str);
    String(const String& str);
    String(String&& str);
    ~String();
    String& operator = (const String& str);
    String& operator = (String&& str);

    String operator +(const String& str) const;

    String& operator  += (const String& str);
    String& operator +=(char ch);
};

















String& String::operator+=(const String& str) {
    // Calculate the new size
    int newSize = m_size + str.m_size;

    // Allocate a new buffer for the concatenated string
    char* newPtr = new char[newSize + 1];

    // Copy the content of the current string
    strcpy(newPtr, ptr);

    // Concatenate the content of the given string
    strcat(newPtr, str.ptr);

    // Delete the old buffer
    delete[] ptr;

    // Update the size and pointer
    m_size = newSize;
    ptr = newPtr;

    // Return the modified object
    return *this;
};

#endif//STRING_H