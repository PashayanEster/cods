#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
// #include <cstddef> 
#include <initializer_list>


    template<typename T, std::size_t size>
    class Array {
        public:
            void set(size_t pos, const T& val);
            T& front();
            const T& front()const;
            T& back();
            const T& back() const;

            void traverse(void(*fp)(const T&));
            size_t getSize()const;
            bool empty()const;
            T& operator[](size_t);
            const T& operator[](size_t)const;
            Array() = default;
            Array(std::initializer_list<T> init);
        private:
            T array[size];
    };

#endif // ARRAY_H