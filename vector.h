#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>
#include <stdexcept>
// #include <vector>
template<typename T>
class Vector
{
public:
    Vector();
    // Vector() : m_vectorPtr(nullptr), m_size(0), m_capacity(0) {}//default
    Vector(int size);
    Vector(const  Vector& other);
    Vector(Vector&& other);
    Vector& operator=(const Vector& other); // copy assignment
    Vector& operator=(Vector&& other); //move assignment
    ~Vector();



    void push_back(int value);
    void push_front(const T& value);
    void pop_back();
    void pop_front();
    void realloc(int new_capacity);
    void erase(size_t pos);
    
    T& operator[](size_t pos);
    const T& operator[](size_t pos) const;

    T& front();
    const T& front() const;

    T& back();
    const T& back() const;

    void insert(size_t pos, T value);



    T& at(size_t pos);
    const T& at(size_t pos) const;



private:
    T* m_vectorPtr;
    size_t m_size;
    size_t m_capacity;
    void resize();
};
template<typename T>
std::ostream& operator<<(std::ostream& out, const Vector<T>& vec);

template<typename T>
std::istream& operator>>(std::istream& in, <T>& vec);

#endif //VECTOR_H
#include "vector.hpp"


