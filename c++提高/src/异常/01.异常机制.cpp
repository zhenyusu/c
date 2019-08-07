#include <iostream>
using namespace std;


//异常语法
int divide(int x,int y)
{
    if(y == 0)
    {
        throw y;//抛异常
    }
    return x/y;
}

void test01()
{
    //试着去捕获异常
    try{
        divide(10,0);
    }
    catch (int)//异常时根据类型进行匹配
    {
        cout << "除数为0"<<endl;
    }
}


void CallDivide(int x,int y)
{
    divide(x,y);
}
void test02()
{
    try{
        CallDivide(10,0);
    }
    catch (int)//异常时根据类型进行匹配
    {
        cout << "除数为0"<<endl;
    }

}
int main(void)
{
    test01();
    return 0;
}