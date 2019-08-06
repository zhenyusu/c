/*数据交换案例*/
#include <iostream>
using namespace std;
//模板技术　类型参数化，编写代码可以忽略类型
//为了让编译器区分是普通函数还是模板函数
//只对下面第一个函数生效
template<class T> //template <typename T> 这两种写法是一样的
void MySwap(T& a,T& b)
{
    T temp = a;
    a = b;
    b = temp;

}

void test01()
{
    int a = 10;
    int b = 20;
    //1.自动类型推导
    cout << "a:" <<a << "  b:"<<b <<endl;
    MySwap(a,b);//编译器根据你传的值进行类型自动推导
    cout << "a:" <<a << "  b:"<<b <<endl;

    double da = 1.12;
    double db = 1.13;
    cout << "da:" <<da << "  db:"<<db <<endl;
    MySwap(da,db);
    cout << "da:" <<da << "  db:"<<db <<endl;

    //2.显示的指定类型
    MySwap<int>(a,b);
}

int main(void)
{
    test01();
    return 0;
}