//
// Created by bps on 2016-03-31.
// don't touch anything below!!

#ifndef ASSIGNMENTC_IPRIORITYQUEUE_H
#define ASSIGNMENTC_IPRIORITYQUEUE_H

template <class T>
class ISet
{
public:


    virtual bool insert(T element) = 0;
    virtual bool remove(T element) = 0;//throw(...)
    virtual int size() const = 0;
};

#endif //ASSIGNMENTC_IPRIORITYQUEUE_H
