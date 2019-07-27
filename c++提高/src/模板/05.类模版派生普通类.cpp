#include <iostream>
using namespace std;
template <class T>
class Person
{
public:
    Person()
    {
        mAge = 0;
    }
public:
    T mAge;
};

class SubPerson:public Person<int>
{

};