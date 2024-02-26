#include "templatevector.h"

template <typename T>
Templatevector<T>::Templatevector()
: m_arr(nullptr)
, m_cap(0)
, m_size(0)
{
    m_arr = new T[m_cap];
}


template <typename T>
Templatevector<T>::Templatevector(size_t size): m_size(0), m_cap(size),m_arr(new T[m_cap])
{}

template <typename T>
Templatevector<T>::Templatevector(const std::initializer_list<T>&elems):m_cap(elems.size()*2),m_arr(new T[m_cap]),m_size(0)
{
    for(const auto& i : elems)
    {
        m_arr[m_size] = i;
        ++m_size;
    }
}
template <typename T>
Templatevector<T>::Templatevector(const Templatevector<T>& other):
m_cap(other.m_cap)
,m_size(other.m_size)
,m_arr(new T[m_cap])
{
    for(auto& i :other.m_arr){
        m_arr[i] = other.m_arr[i];
    }
}


template <typename T>
Templatevector<T>::Templatevector(Templatevector&& other)noexcept
: m_cap{std::exchange(other.m_cap, 0)}
,m_size{std::exchange(other.m_size, 0)}
,m_arr{std::exchange(other.m_arr, nullptr)}
{}



template <typename T>
void Templatevector<T>::resize(){
    T* temp = new T[m_cap *= 2];
    for(int i = 0; i < m_size;++i){
        temp[i] = m_arr[i];
    }
}




template <typename T>
Templatevector<T>::push_back(const T& value){
    if(m_size == cap){
        resize();
    }
    m_arr[m_size ++] = value;
}



template <typename T>
Templatevector<T>::push_front(const T& value){
    if(m_size == m_cap){
        resize();
    }
    if (m_size == 0){
        push_back(value);
    }
    for(int i =)

    m_arr[m_size ++] = value;
}

    template <typename T>
    void Templatevector::resize(){
        
    }
}

