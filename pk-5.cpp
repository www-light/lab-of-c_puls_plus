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
        ��һ���ƶ���ֵ�������
        ���ڽ�һ����ֵ�������͵Ķ����ƶ�����һ�������У�
        ������в���Ҫ�Ŀ���������
        �ƶ���ֵ�����ͨ�����ƶ����캯��һ��ʹ�ã�����ʵ���ƶ����������ת����*/
    a = "5+6i"; a.Print();//���ƹ��캯����=����
    return 0;
}