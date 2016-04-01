//
// Created by bps on 2016-03-31.
//

#ifndef ASSIGNMENTC_PRIORITYQUEUE_H
#define ASSIGNMENTC_PRIORITYQUEUE_H
#include<stdexcept>

template <class T>
class PriorityQueue : public virtual IPriorityQueue{
private:
 T* arrayPtr;
 int nrOfElements=0;
public:
    PriorityQueue();
    ~PriorityQueue();
    PriorityQueue& PriorityQueue(const PriorityQueue& orgin);
    PriorityQueue& operator=(const PriorityQueue& orgin);

    //inherited
    void enqueue(const T& element);
    T dequeue()throw(...);
    T front() const throw(...);
    bool isEmpty() const;

};


#endif //ASSIGNMENTC_PRIORITYQUEUE_H
