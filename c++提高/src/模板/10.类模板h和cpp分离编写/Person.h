#pragma once
#include<iostream>
using namespace std;
template<class T>
class Person
{
public:
    Person(T age);
    void Show();
private:
    T age;
};