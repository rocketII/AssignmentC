//
// Created by bps on 2016-03-03.
//

#include "queue.h"
/////////////////////////////////////////////
////////////member constructiions
////////////////////////////////////////////
//enqueue(const T& element): lägger till element i kön.
queue::queue()
{

}
queue::~queue()
{

}
queue::queue(const T &obj)
{

}
template <typename T>
queue<T>& queue::operator=(const queue<T> &obj)
{
    this->sizeOfQueue = obj.sizeOfQueue;
    this->nrOfItems=obj.nrOfItems;
    this->sizeOfQueuePlusExpand=obj.sizeOfQueuePlusExpand;
    for(int derp =0; derp < obj.nrOfItems; derp++)
    {

    }
    return *this;
}

/////////////////////////////////////////////
////////////member functions
////////////////////////////////////////////
template <typename T>
void queue::enqueue(const T &element)
{
    //circular handling of stack. Rear moves to first element of queue.
    this->rear = (this->rear + 1) % this->sizeOfQueue;
}

//dequeue(): tar bort och returnerar det element som står först på tur.
template <typename T>
T queue::dequeue()throw(...)
{

}

//front(): returnerar det element som står först på tur. Undantag ska hanteras.
template <typename T>
T queue::front() const throw(...)
{
    T a;
    //if(false)
    {
        //throw "something went wrong! ";
    }
    return a;
}
bool queue::isEmpty() const
{

    return this->sizeOfQueue == 0;

}