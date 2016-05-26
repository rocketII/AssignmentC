//
// Created by bps on 2016-03-31.
//

#ifndef ASSIGNMENTC_IPRIORITYQUEUE_H
#define ASSIGNMENTC_IPRIORITYQUEUE_H

template <class T>
class ISet
{
public:
    ISet();
    ~ISet();

    virtual bool insert(T element) = 0;
    virtual bool remove(T element) = 0;//throw(...)
    virtual int size() const = 0;
};

template <class T>
ISet<T>::ISet(){}
template <class T>
ISet<T>::~ISet(){}

#endif //ASSIGNMENTC_IPRIORITYQUEUE_H
