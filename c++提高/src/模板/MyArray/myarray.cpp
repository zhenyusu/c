#include <iostream>
using namespace std;


template<class T>
class MyArray
{
public:
    MyArray(int capacity);
public:
//一共可以容下多少个元素
    int mCapacity;
//当前数组与多少元素
    int mSize;
//保存数据的首地址
    T* pAddr;

};

int main(void)
{
    return 0;
}