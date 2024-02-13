#include <iostream>
#include <cmath>
using namespace std;
const double PI = acos( - 1.0);
class Circle
{
private:
	int r;
	double s;
public:
	void input();
	void  calculate();
	void output();
};
void Circle::input()
{
	cin >> r;
}
void  Circle::calculate()
{
	s = PI * r * r;
}
void Circle::output()
{
	printf("%.2f\n", s);
}
int main()
{
	class Circle c;
	c.input();
	c.calculate();
	c.output();
}