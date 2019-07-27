#include <iostream>
using namespace std;


template <class T>
class Person
{
public:
    Person(T age,T id);
    void Show();
public:
    T mAage;
    T mID;
};

template <class T>
Person<T>::Person(T age,T id)
{
    this->mAage = age;
    this->mID = id;
}

template<class T>
void Person<T>::Show()
{
     cout << "age:" << this->mAage << "id:"<< this->mID<<endl;
}

void test01()
{
    Person<int> p(10,20);
    p.Show();
}

int main(void)
{
    test01();
    return 0;
}