//
// Created by bps on 2016-03-31.
//
#include "Set.h"
#include <iostream>


using namespace std;

int main(void)
{
    //Test Constructor
    Set<int> mySet, tre;
    //test that template work
    //mySet.test(3);
    //test insert with expansion, duplicate elements.
    cout << mySet.insert(1);
    cout << mySet.insert(1);
    cout << mySet.insert(2);
    cout << mySet.insert(3);
    cout << mySet.insert(4);
    //test remove elements untill exception occurs, false positve elements
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
        cout <<"\nWrong!!!\n";
    }

    //testing operato=(..)
    tre = mySet;
    //test template for second datatype
    Set<int> red= tre;

    //test string
    Set<string> mySetI, four;
    //performing the exact same thing as above but with string.
    mySetI.test("...\n");
    cout << mySetI.insert("lol");
    cout << mySetI.insert("lol");
    cout << mySetI.insert("katt");
    cout << mySetI.insert("Hund");
    cout << mySetI.insert("RÖD");
    //test get function
    cout <<"\nSize: "<< mySetI.size()<<"\n";
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
    //test ends here.
    cout  <<"\nfin."<<endl;
    cout  <<"\a"<<endl;
    return 0;
}
