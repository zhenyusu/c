//类模板不要把h和cpp分离写，都写到一个hpp文件中
#include "Person.h"


template<class T>
Person<T>::Person(T age)
{
    this->age = age;
}

template<class T>
void Person<T>::Show()
{
    cout << "Age"<<age<<endl;
}
