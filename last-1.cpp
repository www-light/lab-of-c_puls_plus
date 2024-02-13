#include <iostream>
using namespace std;

class Rational

{

private:

    int z;    //分子

    int m;    //分母
public:

    Rational(int a = 0, int b = 1);  //构造有理数分数，分子默认为0，分母默认为1

    Rational& yuefen(); //约分函数对分数化简

    friend Rational operator+(const Rational& r1, const Rational& r2);

    friend Rational operator-(const Rational& r1, const Rational& r2);

    friend Rational operator*(const Rational& r1, const Rational& r2);

    friend Rational operator/(const Rational& r1, const Rational& r2);

    Rational& operator+=(const Rational& r);

    Rational& operator-=(const Rational& r);

    Rational& operator*=(const Rational& r);

    Rational& operator/=(const Rational& r);

    friend bool operator==(const Rational&, const Rational&);//判断两个有理数是否相等

    friend bool operator!=(const Rational&, const Rational&);//判断两个有理数是否不等

    friend ostream& operator<<(ostream&, const Rational&);

    friend istream& operator>>(istream&, Rational&);

};
Rational::Rational(int a, int b)
{
    z = a;
    m = b;
}
Rational& Rational::yuefen()
{
    if (z == 0)return *this;
    int temp = 0;
    int x, y;
    if (abs(z) > abs(m))
    {
        x = abs(z);
        y = abs(m);
    }
    else {
        y = abs(z);
        x = abs(m);
    }
    int r = x % y;
    while (r != 0)
    {
        x = y;
        y = r;
        r = x % y;
   }
    z = z / y;
    m = m / y;
    if (m < 0 && z < 0)
    {
        z = abs(z);
        m = abs(m);
    }
    else if (m < 0 && z>0)
    {
        z = -z;
        m = abs(m);
    }
    return *this;
}
Rational operator+(const Rational& r1, const Rational& r2)
{
    int i = 0;
    Rational temp;
    temp.m = r1.m * r2.m;
    temp.z = r1.z * (temp.m / r1.m) + r2.z * (temp.m / r2.m);
    temp.yuefen();
    return temp;
}
Rational operator-(const Rational& r1, const Rational& r2)
{
    Rational temp;
    temp.m = r1.m * r2.m;
    temp.z = r1.z * (temp.m / r1.m) - r2.z * (temp.m / r2.m);
    temp.yuefen();
    return temp;
}
Rational operator*(const Rational& r1, const Rational& r2)
{
    Rational temp;
    temp.m = r1.m * r2.m;
    temp.z = r1.z *  r2.z ;
    temp.yuefen();
    return temp;
}
Rational operator/(const Rational& r1, const Rational& r2)
{
    Rational temp;
    temp.m = r1.m * r2.z;
    temp.z = r1.z * r2.m;
    temp.yuefen();
    return temp;
}
Rational& Rational::operator+=(const Rational& r)
{
    *this = *this + r;
    this->yuefen();
    return *this;
}
Rational& Rational::operator-=(const Rational& r)
{
    *this =*this - r;
    this->yuefen();
    return *this;
}
Rational& Rational::operator*=(const Rational& r)
{
    *this = *this * r;
    this->yuefen();
    return *this;
}
Rational& Rational::operator/=(const Rational& r)
{
    *this = *this / r;
    this->yuefen();
    return *this;
}
bool operator==(const Rational&r1, const Rational&r2)
{
    if (r1 - r2 == 0)
    {
        return true;
    }
    else {
        return false;
    }
}
bool operator!=(const Rational& r1, const Rational& r2)
{
    if (r1 - r2 != 0)
    {
        return true;
    }
    else {
        return false;
    }
}
ostream& operator<<(ostream& os, const Rational& r)
{
    os << r.z << "/" << r.m;
    return os;
}
istream& operator>>(istream& is, Rational& r)
{
    is>> r.z >>  r.m;
    r.yuefen();
    return is;
}

int main()
{
    Rational r1, r2, r3;

    while (cin >> r1 >> r2)
    {
       /* cout << "r1 = " << r1 << "\n" << "r2 = " << r2 << endl;
        r3 = r1 + r2;
        cout << "r1+r2 = " << r3 << endl;
        r3 = r1 - r2;
        cout << "r1-r2 = " << r3 << endl;
        r3 = r1 * r2;
        cout << "r1*r2 = " << r3 << endl;
        r3 = r1 / r2;

        cout << "r1/r2 = " << r3 << endl;*/
        cout << (r1 == r2) << " " << (r1 != r2) << endl;
        cout << (r1 += r2) << endl;
        cout << (r1 -= r2) << endl;
        cout << (r1 *= r2) << endl;
        cout << (r1 /= r2) << endl;
    }

    return 0;
}
