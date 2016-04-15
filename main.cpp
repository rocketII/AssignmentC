//
// Created by bps on 2016-03-31.
//
#include <iostream>
#include "Set.h"
#include <stdexcept>

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
    cout<<myQueue.remove(8);
    cout<<myQueue.remove(1);
    cout<<myQueue.remove(2);
    cout<<myQueue.remove(3);
    cout<<myQueue.remove(4);;
    try
    {
        cout<<myQueue.remove(1);
    }
    catch (...)
    {
        cout <<"Wrong!!!";
    }

    tre = myQueue;
    Set<int> red= tre;
    cout  <<"\nfin."<<endl;
    return 0;
}
