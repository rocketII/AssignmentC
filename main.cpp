//
// Created by bps on 2016-03-31.
//
#include <iostream>
#include "Set.h"

using namespace std;

int main(void)
{
    Set<int> myQueue, tre;
    myQueue.test(3);
    cout<<myQueue.insert(1);
    cout<<myQueue.insert(1);
    cout << myQueue.insert(2);
    cout<<myQueue.insert(3);
    cout<<myQueue.insert(4);
    tre = myQueue;
    Set<int> red= tre;
    cout  <<"\nfin."<<endl;
    return 0;
}
