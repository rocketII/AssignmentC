//
// Created by bps on 2016-03-31.
//

#include "PriorityQueue.h"

template <class T>
PriorityQueue::PriorityQueue()
{
    this->nrOfElements=0;
    this->arrayPtr = new T[2];
}

PriorityQueue::~PriorityQueue()
{
    delete[]  this->arrayPtr;
}

PriorityQueue::PriorityQueue(const PriorityQueue &orgin)
{
    ;
}

PriorityQueue& PriorityQueue::operator=(const PriorityQueue &orgin)
{
    return *this;
}

//////////////////////////////////////////////
//
//                inherited
//
/////////////////////////////////////////////

template <class T>
T PriorityQueue::dequeue()
{
    ;
}

template <class T>
void PriorityQueue::enqueue(const T &element)
{

}

template <class T>
T PriorityQueue::front() const
{
    return this->nrOfElements[0];
}
bool PriorityQueue::isEmpty() const
{
    if (this->nrOfElements > 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}