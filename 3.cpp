#include <iostream>
#include <string.h>
using namespace std;
class Rectangle
{
private:
	double length;
	double width;
public:
	Rectangle(double m_length = 10., double m_width=5.);
	double Area();
	double Perimeter();
};
Rectangle::Rectangle(double m_length, double m_width)
{
	length = m_length;
	width = m_width;
}
double Rectangle::Area()
{
	return (length + 2 * 1.5) * (width + 2 * 1.5)- length * width;
}
double Rectangle::Perimeter()
{
	return 2*(length +2 * 1.5) + 2*(width +2 * 1.5);
}
int main()
{
	int l;
	int w;
	cin >> l >> w;
	Rectangle r(l,w);
	cout << r.Perimeter() << " " << r.Area() << endl;
		cout << 50 * r.Perimeter() << endl<<240 *r.Area() << endl;
}