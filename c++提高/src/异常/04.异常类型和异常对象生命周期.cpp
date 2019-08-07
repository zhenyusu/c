#include <iostream>
#include <string.h>
using namespace std;

void func01()
{
    throw 1;//抛出int 类型异常
}
void func02()
{
    throw "exception";//抛出int 类型异常
}


class MyException
{
public:
    MyException(char* str)
    {
        error = new char[strlen(str)+1];
        strcpy(error,str);
    }
    void what()
    {
        cout << error<<endl;
    }
    ~MyException()
    {
        if(error!=NULL)
        {
            delete[]error;
        }
    }
public:
    char* error;
};

void fun03()
{
    throw MyException("我刚写的异常");
}

void test01()
{
    try
    {
        func01();
    }
    catch(int e)
    {
        std::cout << "异常捕获" << std::endl;
    }

    try
    {
        /* code */
        func02();
    }
    catch(char *e)
    {
        std::cout << "异常捕获" << std::endl;
    }

    try
    {
        fun03();
    }
    catch(MyException e)
    {
         e.what();
    }
    
    
}
int main(void)
{
    return 0;
}