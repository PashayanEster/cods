#include "Array.h"
#include <initializer_list>

template<typename T, size_t size>
void Array <T, size>::set(size_t pos, const T& val){
    if (pos >= size)
    throw std::out_of_range(" ");
    array[pos] = val;

}

template<typename T, size_t size>
T& Array<T, size>::front()
{
    return array[0];
}
template <typename T, size_t size>
const T& Array<T, size>::front()const
{
return array[0];
}


template<typename T, size_t size>
T& Array<T, size>::back()
{
    return array[size - 1];
}

template <typename T, size_t size>
const T& Array <T, size>::back()const
{
    return array[size-1];
}

template< typename T, size_t size>
    void Array <T, size>::traverse(void(*fp)(const T&))
    {
        for(int i = 0; i < size; ++i){
            fp(array[i]);
        }
    }
    template < typename T, size_t size>
    bool Array <T, size>::empty()const{
        return size == 0;
    }

template <typename T, size_t size>
T& Array <T, size>::operator[](size_t pos)
{
    return array[pos];
}

template <typename T, size_t size>
Array<T, size>::Array(std::initializer_list<T> init)
{
    int i = 0;
    for(auto e : init)
    {
        array[i++] = e;
    }
}


