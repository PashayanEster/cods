
#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>

template <typename T>
class Queue {
    struct Node{
        T m_data;
        Node* m_next;
        Node (T value): m_data{value}, m_next{nullptr}{}
    };
    
    public:
    Queue();
    Queue(const Queue& other);
    Queue(T);
    ~Queue();
    T front()const;
    T back()const;
    bool empty()const;
    std::size_t size()const;
    void push(T);
    void pop();

    private :
    Node* _head;
    Node* _tail;

    public:
    friend bool operator == (const Queue&,const Queue&);

};

#endif //QUEUE_H