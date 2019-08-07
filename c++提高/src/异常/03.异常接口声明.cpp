#include <iostream>
using namespace std;


//这个函数只能抛出int float char 三种异常，抛出其他的就报错
void func() throw ()
{
    throw "abc";
}
int main(void)
{
    func();
    return 0;
}