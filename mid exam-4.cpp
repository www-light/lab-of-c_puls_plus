//考察的是模板和“参数类型的变化”
#include <iostream>
#include <cmath>
using namespace std;
template <typename T>
class Point2
{
private:
	T x;
	T y;
public:
	Point2()
	{
	}
	Point2(T a, T b):x(a),y(b)
	{}
	T get_x()
	{
		return x;
	}
	T get_y()
	{
		return y;
	}
};
template <typename T1>
class Line2
{
private:
	Point2<T1> a;
	Point2<T1> b;
public:
	Line2(T1 x, T1 y) :a(x), b(y)
	{}
	Line2(Point2<T1> m, Point2<T1> n)
	{
		a = m;
		b = n;
	}
	T1 Length();
};
template <typename T1>
T1 Line2<T1>::Length()
{
	T1 x = a.get_x();
	T1 y = a.get_y();
	T1 x1 = b.get_x();
	T1 y1 = b.get_y();
	return sqrt((x - x1) * (x - x1) + (y - y1) * (y - y1));
}
int main()
{
	Point2<double> pt1(1.0, 1.0);
	Point2<double> pt2(3.0, 4.0);
	Line2<double> line(pt1, pt2);
	cout << line.Length() << endl;

	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	Line2<int> nLine(Point2<int>(x1, y1), Point2<int>(x2, y2));
	cout << nLine.Length() << endl;

	return 0;
}
