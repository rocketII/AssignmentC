//
// Created by bps on 2016-03-03.
//

#ifndef ASSIGNMENTC_QUEUE_H
#define ASSIGNMENTC_QUEUE_H
template <typename T>
class queue
{
private:
    int nrOfItems, sizeOfQueue, sizeOfQueuePlusExpand;
    int rear, front;
    T *pointerArr;
    void expand(void);
public:
    //konstruktors and operators
    queue();
    ~queue();
    queue(const T& obj);

    T& operator=(const T &obj);
    //member inherited functions
    void enqueue(const T& element) = 0;
    T dequeue()throw(...) = 0;
    T front() const throw(...) = 0;
    bool isEmpty() const = 0;
};
#endif //ASSIGNMENTC_QUEUE_H
