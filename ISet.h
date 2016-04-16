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
    virtual bool remove(T element)throw(...) = 0;
    virtual int size() const = 0;
};


#endif //ASSIGNMENTC_IPRIORITYQUEUE_H
