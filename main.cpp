//
// Created by bps on 2016-03-31.
//
#include <iostream>
#include "Set.h"
//#include <stdexcept>

using namespace std;

int main(void)
{
    Set<int> mySet, tre;
    mySet.test(3);
    cout << mySet.insert(1);
    cout << mySet.insert(1);
    cout << mySet.insert(2);
    cout << mySet.insert(3);
    cout << mySet.insert(4);
    cout << mySet.remove(8);
    cout << mySet.remove(1);
    cout << mySet.remove(2);
    cout << mySet.remove(3);
    cout << mySet.remove(4);
    try
    {
        cout << mySet.remove(1);
    }
    catch (...)
    {
        cout <<"\nWrong!!!";
    }

    tre = mySet;
    Set<int> red= tre;

    //test string
    Set<string> mySetI, four;
    mySetI.test("noob");
    cout << mySetI.insert("lol");
    cout << mySetI.insert("lol");
    cout << mySetI.insert("katt");
    cout << mySetI.insert("Hund");
    cout << mySetI.insert("RÖD");
    cout << mySetI.remove("lol");
    cout << mySetI.remove("lol");
    cout << mySetI.remove("Canada");
    cout << mySetI.remove("katt");
    cout << mySetI.remove("Hund");
    try
    {
        cout << mySetI.remove("RÖD");
    }
    catch (...)
    {
        cout <<"\nWrong!!!";
    }
    cout << mySetI.insert("RÖD");
    four = mySetI;
    Set<string> bed= four;
    cout  <<"\nfin."<<endl;
    cout  <<"\n"<<endl;
    return 0;
}
