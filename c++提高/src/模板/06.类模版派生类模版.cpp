#include <iostream>
using namespace std;

template <class T>
class Animal
{
public:
    void Jiao()
    {
        cout << mAge << "岁动物在叫" <<endl;
    }
public:
    T mAge;
};