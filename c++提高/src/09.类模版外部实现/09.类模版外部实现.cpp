
//在类的模板中不要滥用友元函数
#include <iostream>
using namespace std;
//类外申明
template <class T> class Person;
template <class T> ostream& operator<<(ostream& os,Person<T>& p);
template <class T> void PrintPerson(Person<T>& p);
template <class T>
class Person
{
public:
    //重载左移操作符
   // template<class T> 在windows编译器能通过
    friend ostream& operator<<<T> (ostream& os,Person<T>& p);
    //普通的友元函数
    friend void PrintPerson<T>(Person<T>& p);
    Person(T age,T id);
    void Show();
private:
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

//重载左移操作符
template<class T>
ostream& operator<<(ostream& os,Person<T>&p)
{
    os<<"Age:"<<p.mAage<<"ID:"<<p.mID<<endl;
}

template<class T>
void PrintPerson(Person<T>& p)
{
    cout << "age:" << p.mAage << "id:"<< p.mID<<endl;
}


void test01()
{
    Person<int> p(10,20);
    //p.Show();
    //cout << p;
    PrintPerson(p);
}

int main(void)
{
    test01();
    return 0;
}