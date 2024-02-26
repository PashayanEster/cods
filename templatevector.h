#ifndef TEMPLATEVECTOR_H
#define TEMPLATEVECTOR_H
#include <iostream>
#include <initializer_list>
template <typename T>
class Templatevector {
    public:
    Templatevector();
    Templatevector(const  Templatevector& other);
    Templatevector(Templatevector&& other);
    Templatevector (size_t size);
    Templatevector(const std::initializer_list<T>&elems);
    void push_back(const T& value);
    void push_front(const T& value);
    void pop_back();
    void pop_front();
    T& at(size_t index);//sovorakan obyektneri vra arox eq kanchel
    const T& at(size_t index)const;//const obyekti vra kanchenq
    void insert(const T& value);
    T& operator[] (size_t index);
    const T& operator[](size_t index) const;
    Templatevector& operator=(const Templatevector&);
    ~Templatevector();

    private:
    void resize();

    private:
    size_t m_size;
    size_t m_cap;
    T* m_arr;

};


#endif//TEMPLATEVECTOR_H