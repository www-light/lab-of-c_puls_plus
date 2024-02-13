#include <iostream>
using namespace std;
class IntArray
{
private:
    int* arr;
    int num;
public:
    IntArray(int*, int);
    IntArray(IntArray&);
    IntArray operator=(IntArray&);
    int sum();
    ~IntArray()
    {}
};
IntArray::IntArray(int* m_arr, int n)
{
    arr = m_arr;
    num = n;
}
IntArray::IntArray(IntArray& a)
{
    this->arr = a.arr;
    this->num = a.num;
}
IntArray IntArray::operator=(IntArray& a)
{
    this->arr = a.arr;
    this->num = a.num;
    return *this;
}
int IntArray::sum()
{
    int sum=0;
    int  i = 0;
    for (int i = 0; i < num; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    int* array = new int[n];
    for (int i = 0; i < n; i++)
        cin >> array[i];

    IntArray test(array, n);   // 调用构造函数 
    IntArray copytest(test);   // 调用拷贝构造函数
    copytest = test;           // 调用重载的赋值运算符 = 
    cout << copytest.sum();    // 调用sum函数计算数组的和，之后输出和 

    delete[] array;

    return 0;
}