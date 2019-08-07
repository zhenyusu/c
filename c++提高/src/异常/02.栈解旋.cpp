#include<iostream>
using namespace std;



class Person
{
public:
    Person()
    {
        cout << "对象构建" <<endl;
    }
    ~Person()
    {
        cout << "析构函数" <<endl;
    }
};
int divide(int x,int y)
{
    Person p1,p2;//当发生异常，p1 p2自动调用析构函数

    if(y == 0)
    {
        throw y;
    }
}

void test01()
{
    //试着去捕获异常
    try{
        divide(10,0);
    }
    catch (int e)//异常时根据类型进行匹配
    {
        cout << "异常捕获"<<endl;
    }
}
int main(void)
{
    test01();
    return 0;
}