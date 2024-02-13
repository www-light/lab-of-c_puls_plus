#include <iostream>
using namespace std;
class Complex

{

private:

	double x;

	double y;

public:

	Complex(double x = 0.0, double y = 0.0);

	Complex& operator+=(const Complex&);

	Complex& operator-=(const Complex&);

	Complex& operator*=(const Complex&);

	Complex& operator/=(const Complex&);

	friend Complex operator+(const Complex&, const Complex&);

	friend Complex operator-(const Complex&, const Complex&);

	friend Complex operator*(const Complex&, const Complex&);

	friend Complex operator/(const Complex&, const Complex&);

	friend bool operator==(const Complex&, const Complex&);

	friend bool operator!=(const Complex&, const Complex&);

	friend ostream& operator<<(ostream&, const Complex&);

	friend istream& operator>>(istream&, Complex&);

};
Complex::Complex(double x , double y ) :x(x), y(y)
{
}
Complex& Complex::operator+=(const Complex& m)
{
	x += m.x;
	y += m.y;
	return *this;
}
Complex& Complex::operator-=(const Complex& m)
{
	x -= m.x;
	y -= m.y;
	return *this;
}
Complex operator+(const Complex& m, const Complex& n)
{
	Complex sum;
	sum.x = m.x + n.x;
	sum.y = m.y + n.y;
	return sum;
}
Complex operator-(const Complex& m, const Complex& n)
{
	Complex sum;
	sum.x = m.x - n.x;
	sum.y = m.y - n.y;
	return sum;
}
Complex operator*(const Complex& m, const Complex& n)
{
	Complex sum;
	sum.x = m.x * n.x - m.y * n.y;
	sum.y = m.y * n.x + m.x * n.y;
	return sum;
}
Complex operator/(const Complex& m, const Complex& n)
{
	Complex sum;
	sum.x = (m.x * n.x + m.y * n.y) / (n.x * n.x + n.y * n.y);
	sum.y = (m.y * n.x - m.x * n.y) / (n.x * n.x + n.y * n.y);
	return sum;
}
Complex& Complex::operator*=(const Complex& m)
{
	*this = *this * m;
	return *this;
}
Complex& Complex::operator/=(const Complex& m)
{
	*this = *this / m;
	return *this;
}
bool operator==(const Complex& m, const Complex& n)
{
	if (m.x == n.x && m.y == m.y)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool operator!=(const Complex& m, const Complex& n)
{
	if (m.x != n.x || m.y != m.y)
	{
		return true;
	}
	else
	{
		return false;
	}
}
ostream& operator<<(ostream& os, const Complex& n)
{
	os << n.x << "+" << n.y << "i";
	return os;
}
istream& operator>>(istream& is, Complex& n)
{
	cin >> n.x >> n.y;
	return is;
}
int main()

{

	Complex c1, c2;

	cin >> c1 >> c2;

	cout << "c1 = " << c1 << "\n" << "c2 = " << c2 << endl;

	cout << "c1+c2 = " << c1 + c2 << endl;

	cout << "c1-c2 = " << c1 - c2 << endl;

	cout << "c1*c2 = " << c1 * c2 << endl;

	cout << "c1/c2 = " << c1 / c2 << endl;

	cout << (c1 += c2) << endl;

	cout << (c1 -= c2) << endl;

	cout << (c1 *= c2) << endl;

	cout << (c1 /= c2) << endl;

	cout << (c1 == c2) << " " << (c1 != c2) << endl;

	return 0;

}