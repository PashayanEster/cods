#include "string.h"

String::String(): m_size(0), ptr(nullptr)
{ }//Ctor

String::String(const char* str): m_size(strlen(str))
{
    ptr = new char[m_size];
    for(int i =0; i< m_size; ++i){
        ptr[i] = str[i];
    }
}//parametrakan



String::String (const String& str) : m_size(str.m_size){
    ptr = new char[m_size];
    for(int i = 0; i < m_size; ++i){
        ptr[i] = str.ptr[i];
    }

}//copy Ctor

String& String::operator=(const String& str){
m_size = str.m_size;
if(ptr != nullptr){
    delete [] ptr;
}
ptr = new char[m_size];
for(int i =0; i < m_size; ++i){
ptr [i]= str.ptr[i];
}

}
//copy assignment


// String::String(String&& str): m_size(str.m_size){
//     str.m_size = 0;
//     // str.ptr = nullptr;
//     delete [] ptr;
//     ptr = std::move(str.ptr);
// }

String::String(String&& str) : m_size(std::move(str.m_size)), ptr(std::move(str.ptr)) {
    str.m_size = 0;
    str.ptr = nullptr;
}// move ctor


String& String::operator = (String&& str) {
    if (this != &str) {
        delete[] ptr;
        m_size = std::move(str.m_size);
        ptr = std::move(str.ptr);
    
        str.m_size = 0;
        str.ptr = nullptr;
    }
    //move assignment



String String::operator + (const String& str) const {

    int newSize = m_size + str.m_size;

    char* newPtr = new char[newSize + 1];

    strcpy(newPtr, ptr);//im yntacik stringi parunakutyuny copy em anum stex

    strcat(newPtr, str.ptr);//trvac stringy konkatenicai em anum 

    String result;//stexcum em nor obyekt, vory parunakum e konkat exac stringy
    result.m_size = newSize;
    result.ptr = newPtr;

    return result;//veradarcnum e nor stexcvac obyekty
}//+ operator 





};



