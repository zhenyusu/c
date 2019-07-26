#include <iostream>
using namespace std;

template<class T>
int MyAdd(T a, T b)
{
    return a + b;
}


//普通函数可以进行自动类型转换
//函数模板必须严格类型匹配
int MyAdd(int a, char c)
{
    return a + c;
}

void test01()
{
    int a = 10;
    int b = 20;
    char c1 = 'a';
    char c2 = 'b';
    MyAdd(a,c1);//调用普通函数
    MyAdd(a,b);//调用模板函数
    MyAdd(c1,b);//调用普通函数
}

template<class T>
int MyAdd1(T a,T b)
{
    return a + b;
}

int MyAdd1(int a,int b)
{
    return a + b;
}


void test02()
{
    int a = 10;
    int b = 20;
       
    MyAdd(a,b);//调用普通函数
    MyAdd<>(a,b);

}

int main(void)
{
    test01();
    return 0;
}