//
// Created by bps on 2016-03-31.
//

#ifndef ASSIGNMENTC_PRIORITYQUEUE_H
#define ASSIGNMENTC_PRIORITYQUEUE_H
#include "ISet.h"
#include<stdexcept>
#include <typeinfo>
using namespace std;
template <class T>
class Set : public ISet<T>
{
private:
    T* arrayPtr;
    int nrOfElements;
    int capacity;
public:
    Set();
    ~Set();
    Set(const Set & orgin);
    Set & operator=(const Set & orgin);
    //inherited
    virtual bool insert(T element);
    virtual bool remove(T element);//throw(...) are non standard
    virtual int size() const;
    //inherited end
    //DBG only: checks that stuff works
    void test(T)const;

};

//Du borde inte ha implementationer av ISet<T>ISet
//template <class T>
//ISet<T>::ISet(){}


//Du borde inte ha implementationer av ISet<T>ISet
//template <class T>
//ISet<T>::~ISet(){}
template <class T>
Set<T>::Set()
{

    this->nrOfElements=0;
    this->capacity=2;
    this->arrayPtr = new T[2];
}
template <class T>
Set<T>::~Set()
{

    delete[]  this->arrayPtr;
}

template <class T>
Set<T>::Set(const Set<T>& orgin)
{
    this->nrOfElements = orgin.nrOfElements;
    this->capacity=orgin.capacity;
    this->arrayPtr=new T[this->capacity];
    for (int i = 0; i < this->nrOfElements ; ++i)
    {
        this->arrayPtr[i] = orgin.arrayPtr[i];
    }
}
template <class T>
Set<T>& Set<T>::operator=(const Set<T>& orgin)
{
    if(this != &orgin)
    {
        this->nrOfElements = orgin.nrOfElements;
        this->capacity = orgin.capacity;
        delete[] this->arrayPtr;
        this->arrayPtr = new T[this->capacity];
        for (int i = 0; i < this->nrOfElements; ++i) {
            this->arrayPtr[i] = orgin.arrayPtr[i];
        }
    }
    return *this;
}
//dbg only
template <class T>
void Set<T>::test(T fgr)const
{
    //read with break points
    T mao =fgr;
    mao;
}

template <class T>
bool Set<T>::insert(T element)
{

    if(this->nrOfElements < this->capacity)
    {
        //check existence of element
        for (int i = 0; i < this->nrOfElements ; ++i)
        {
            if(this->arrayPtr[i] == element)
            {
                return false;
            }
        }
        //add element
        this->arrayPtr[this->nrOfElements] = element;
        this->nrOfElements++;
        return true;
    }
    else
    {
        //expand, every for loop are linear time complexity.
        //när du expanderar behöver du bara skapa en ny array, kopiera värden, avallokera den gamla arrayen, och sedan ytkopiera pekaren
        T* tmp = new T[this->capacity];
        for (int i = 0; i < this->nrOfElements ; ++i)
        {
            tmp[i] = this->arrayPtr[i];
        }
        delete[]this->arrayPtr;
        this->arrayPtr = new T[this->capacity+3];
        this->capacity += 3;

        for (int i = 0; i < this->nrOfElements ; ++i)
        {
            this->arrayPtr[i]=tmp[i];
        }
        delete[] tmp;

        for (int i = 0; i < this->nrOfElements ; ++i)
        {
            if(this->arrayPtr[i] == element)
            {
                return false;
            }
        }
        this->arrayPtr[this->nrOfElements] = element;
        this->nrOfElements++;
        return true;
    }

}



template <class T>
int Set<T>::size() const
{
    return this->nrOfElements;
}
template <class T>
bool Set<T>::remove(T element)//throw(...)//throw(...) here are not c++ std therefore GNU compiler won't accept Microsoft concepts. :'(
{
    if(this->nrOfElements < 1)
    {
        throw "ERROR: empty!\n";
    }
    else
    {
        for (int i = 0; i < this->nrOfElements ; ++i)
        {
            if(this->arrayPtr[i]==element)
            {
                this->arrayPtr[i]=this->arrayPtr[this->nrOfElements-1];
                this->nrOfElements--;
                return true;
            }
        }
    }
    return false;
}
#endif //ASSIGNMENTC_PRIORITYQUEUE_H