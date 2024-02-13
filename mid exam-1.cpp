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

    IntArray test(array, n);   // ���ù��캯�� 
    IntArray copytest(test);   // ���ÿ������캯��
    copytest = test;           // �������صĸ�ֵ����� = 
    cout << copytest.sum();    // ����sum������������ĺͣ�֮������� 

    delete[] array;

    return 0;
}