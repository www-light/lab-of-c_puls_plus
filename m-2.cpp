#include <iostream>
#include <math.h>
using namespace std;
const double PI = acos(-1.0);
class Point
{
private:
    double x, y;
public:
    Point(double a = 0, double b = 0) :x(a), y(b) {}
    ~Point() {}
    double getX() const { return x; }
    double getY() const { return y; }
    void setX(double a) { x = a; }
    void setY(double b) { y = b; }
};
class Ellipse
{
public:
    Point pAxis;
    Ellipse(double x = 0, double y = 0) :pAxis(x, y) { }
    ~Ellipse() { }
    Ellipse(const Ellipse&);
    Ellipse transposition();    // 转置（交换长短半轴）
    double area();            // 面积
    double eccentricity();        // 离心率
    string position(const Point);    // 位置关系
};
Ellipse::Ellipse(const Ellipse& a)
{
    this->pAxis= a.pAxis;
}
Ellipse Ellipse::transposition()
{
    Ellipse temp;
    double tempone = this->pAxis.getY();
    temp.pAxis.setY(this->pAxis.getX());
    temp.pAxis.setX(tempone);
    return temp;
}
double Ellipse::area()
{
    double a=this->pAxis.getX();
    double b=this->pAxis.getY();
    return PI * a * b;
}
double Ellipse::eccentricity()
{
    double a = this->pAxis.getX();
    double b = this->pAxis.getY();
    cout << a << " " << b;
    return sqrt(1 - (b * b) / (a * a));
}
string Ellipse::position(const Point a)
{
    double x = a.getX();
    double y = a.getY();
    double m = this->pAxis.getX();
    double n = this->pAxis.getY();
    if ((x * x) / (m * m) + (y * y) / (n * n) == 1)
    {
        return "at";
    }
    else if ((x * x) / (m * m) + (y * y) / (n * n) > 1)
    {
        return "outside";
    }
    else if((x * x) / (m * m) + (y * y) / (n * n) < 1)
    {
        return "inside";
    }
}
int main()
{
    double a, b;
    while (cin >> a >> b)
    {
        Ellipse d1(a, b), d2(d1), d3 = d2.transposition();
        cout << d1.area() << endl;
        cout << d2.eccentricity() << endl;
        cin >> a >> b;
        Point p(a, b);
        cout << d3.position(p) << endl;
    }
    return 0;
}