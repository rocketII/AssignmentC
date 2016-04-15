//
// Created by bps on 2016-03-31.
//

#ifndef ASSIGNMENTC_PRIORITYQUEUE_H
#define ASSIGNMENTC_PRIORITYQUEUE_H
#include "IPriorityQueue.h"
#include<stdexcept>
#include <iostream>
#include <typeinfo>
using namespace std;
template <class T>
class PriorityQueue : public IPriorityQueue<T>
{
private:
    T* arrayPtr;
    int nrOfElements=0;
    int capacity=2;
public:
    PriorityQueue();
    ~PriorityQueue();
    //PriorityQueue& PriorityQueue(const PriorityQueue& orgin);
    //PriorityQueue& operator=(const PriorityQueue& orgin);

    //inherited
    void test(T);
    virtual void enqueue(const T& element);
    //virtual T dequeue()throw(...);
    //virtual T front() const throw(...);
    virtual bool isEmpty() const;

};


template <class T>
IPriorityQueue<T>::IPriorityQueue()
{
    ;
}
template <class T>
IPriorityQueue<T>::~IPriorityQueue()
{
    ;
}
template <class T>
PriorityQueue<T>::PriorityQueue()
{
    this->nrOfElements=0;
    this->arrayPtr = new T[2];
}
template <class T>
PriorityQueue<T>::~PriorityQueue()
{
    delete[]  this->arrayPtr;
}

template <class T>
void PriorityQueue<T>::enqueue(const T& element)
{
    if(this->nrOfElements > this->capacity)
    {
        //expansion
        T* tmp= new T[this->capacity];
        for (int i = 0; i < this->capacity ; ++i)
        {
              tmp[i] = this->arrayPtr[i];
        }
        delete[] this->arrayPtr;
        this->arrayPtr = new T[this->capacity+3];
        for (int i = 0; i < this->capacity ; ++i)
        {
              this->arrayPtr[i]=tmp[i];
        }
        delete[] tmp;
    }
    else
    {
        this->arrayPtr= new T[this->capacity];
    }

}
template <class T>
bool PriorityQueue<T>::isEmpty() const
{
   if(this->capacity == 0)
   {
       return true;
   }
    return false;
}
template <class T>
void PriorityQueue<T>::test(T fgr)
{
    cout << "cool"<< fgr;
}
#endif //ASSIGNMENTC_PRIORITYQUEUE_H
