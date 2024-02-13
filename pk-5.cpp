#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
class Complex {
private:
    double r, i;
public:
    void Print() {
        cout << r << "+" << i << "i" << endl;
    }
    /*Complex()
    {
       
    }*/
    /*Complex operator=(const char a[5])
    {
        const char* temp = new char(5);
        temp = a;
       char* ptr;
       this->r =strtod(a,&ptr);
       cout << this->r<<endl;
       this->i = strtod(temp + 2, &ptr);
        cout << this->i<<endl;
        return *this;
   }*/
    Complex() {

    }
    Complex(const char* str) {
        r = str[0] - '0';
        i = str[2] - '0';
    }
    /*Complex(string a)
    {
        *this = a;
    }*/
};
int main() {
    Complex a;
    a = "3+4i"; a.Print();
   /* Complex& Complex::operator=(Complex&&)
        是一个移动赋值运算符，
        用于将一个右值引用类型的对象移动到另一个对象中，
        避免进行不必要的拷贝操作。
        移动赋值运算符通常与移动构造函数一起使用，用于实现移动语义和完美转发。*/
    a = "5+6i"; a.Print();//复制构造函数的=重载
    return 0;
}