//
// Created by bps on 2016-03-31.
//

#ifndef ASSIGNMENTC_IPRIORITYQUEUE_H
#define ASSIGNMENTC_IPRIORITYQUEUE_H

template <class T>
class IPriorityQueue
{
public:
    IPriorityQueue();
    ~IPriorityQueue();

    virtual void enqueue(const T& element) = 0;
    //virtual T dequeue()throw(...) = 0;
    //virtual T front() const throw(...) = 0;
    virtual bool isEmpty() const = 0;
};


#endif //ASSIGNMENTC_IPRIORITYQUEUE_H
