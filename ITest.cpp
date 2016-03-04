//
// Created by bps on 2016-03-03.
//
#include "queue.h"
#include <iostream>
#include <stdexcept>
#include <string>

int main()
{
    queue<int> testQueue;
    try
    {
        front();
    }
    catch (int *e)
    {
        cout << e.what() <<endl;
    }

    queue<string> testQueue;
    try
    {
        front();
    }
    catch (string *e)
    {
        cout << e.what() << endl;
    }


    return 0;
}