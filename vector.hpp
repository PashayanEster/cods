#include "vector.h"
template<typename T>
Vector<T>::Vector() : m_vectorPtr(nullptr), m_size(0), m_capacity(0) {}//default



tempalet<typename T>
Vector<T>::Vector(size_t size) : m_size(size) , m_capacity(size * 2){
    m_vectorPtr = new T[m_capacity];
}

tempalet<typename T>
Vector<T>::Vector (const Vector& other) : 
        m_size(other.m_size)
        ,m_capacity(other.m_capacity)
        ,m_vectorPtr(nullptr)
{
    if (!m_capacity) {
        return;}
    m_vectorPtr = new T[m_capacity];
    for (size_t i = 0; i < m_size; ++i) 
    {
        m_vectorPtr[i] = other.m_vectorPtr[i];
    }
}
// copy constructor


Vector &Vector::operator=(const Vector& other)
{
    if (this != &other)
    {
        delete[] m_vectorPtr;
        m_size = other.m_size;
        m_capacity = other.m_capacity;
        if (m_capacity == 0) {
            m_vectorPtr = nullptr;
            return *this;
        }
        m_vectorPtr = new T[m_capacity];
        for (size_t i = 0; i < m_size; ++i) {
            m_vectorPtr[i] = other.m_vectorPtr[i];
        }
    }
    return *this;
} //copy assignment





Vector::Vector(Vector&& other) :
    m_vectorPtr(other.m_vectorPtr),
    m_size(other.m_size),
    m_capacity(other.m_capacity)
    {
        other.m_vectorPtr = nullptr;
        other.m_size = 0;
        other.m_capacity = 0;
    };//move constructor



Vector& Vector::operator=(Vector && other) {
    if (this == &other) 
        return *this;
    m_size = other.m_size;
    m_capacity = other.m_size;
    return *this;
}//move assignment




T& Vector::operator[](size_t pos) {
    return m_vectorPtr[pos];//the subscript operator ([]),
}

const T& Vector::operator[](size_t pos) const {  
    return m_vectorPtr[pos];// const subscript operator ([]),
}

T& Vector::front() {
        if (!m_vectorPtr)
            throw 0;
        return m_vectorPtr[0];
    }//front function

const T& Vector::front() const {
    if (m_size == 0) {
        throw std::out_of_range("Vector is empty");
    }
    return m_vectorPtr[0];
}//const front

T& Vector::back() {
    if (m_size == 0) {
        throw std::out_of_range("Vector is empty");
    }
    return m_vectorPtr[m_size - 1];
}//back function

const T& Vector::back() const {
    if (m_size == 0) {
        throw std::out_of_range("Vector is empty");
    }
    return m_vectorPtr[m_size - 1];
}//const back




T& Vector::at(size_t pos) {
    if (pos >= m_size) {
        throw std::out_of_range("Index out of bounds");
    }
    return m_vectorPtr[pos];
}// at access specified element with bounds checking

const T& Vector::at(size_t pos) const {
    if (pos >= m_size) {
        throw std::out_of_range("Index out of bounds");
    }
    return m_vectorPtr[pos];
}//const at access specified element with bounds checking


void Vector::push_back(T value) {
    if (m_size == m_capacity) {
        realloc(m_capacity * 2 + 1);
    }
    m_vectorPtr[m_size++] = value;
}//push_back function



void Vector::pop_back(){
    if (m_size ==  0){
    
        throw std::out_of_range("Try again");
    }
--m_size;
}// pop_back 



void Vector::insert(size_t pos, int value){
    if (pos < 0 || pos > m_size){
            std::cout<<"Wrong, try again";
    }
        if (m_size == m_capacity){
            realloc(m_capacity * 2 + 1);
    }
        for (size_t i = m_size; i > pos; --i) {
            m_vectorPtr[i] = m_vectorPtr[i - 1];
            }
                m_vectorPtr[pos] = value;

}// insert function 


void Vector::realloc(int new_capacity){
T* new_m_vectorPtr = new int[new_capacity];
 // Copy existing elements to the new memory
    for (size_t i = 0; i < m_size; ++i) {
        new_m_vectorPtr[i] = m_vectorPtr[i];
    }
    delete[] m_vectorPtr;
    m_vectorPtr = new_m_vectorPtr;
    m_capacity = new_capacity;

}//Realloc


void Vector::erase(size_t pos ){
    if(pos >= m_size){
        throw std::out_of_range( "try Again, it's wrong");
    }

    for (size_t i = pos; i < m_size -1; ++i){
        m_vectorPtr[i] = m_vectorPtr[i + 1];
    }
    --m_size;
}// Erase

Vector::~Vector() {
    if(m_vectorPtr != nullptr)
        delete[] m_vectorPtr;
        m_vectorPtr = nullptr;

}//destructor



