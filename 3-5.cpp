#include <iostream>
using namespace std;
class Shape {//抽象基类，（用基类指针数组同时管理 Circle 和 Ellipse 对象）

public:

	Shape() {}

	virtual double area() = 0;

	virtual void input() = 0;

	virtual double volume() = 0;

	virtual ~Shape() {}

};
class Cuboid :public Shape
{
private:
	double len;
	double width;
	double height;
public:
	Cuboid()
	{}
	virtual void input();
	virtual double area();
	virtual double volume();
};
void Cuboid::input()
{
	cin >> len >> width >> height;
}
double Cuboid::area()
{
	return 2.0 * (len * width + len * height + width * height);
}
double Cuboid::volume()
{
	return len * width * height;
}
class Cylinder :public Shape
{
private:
	double r;
	double height;
public:
	Cylinder(){}
	virtual void input();
	virtual double area();
	virtual double volume();
};
void Cylinder::input()
{
	cin >> r >> height;
}
double Cylinder::area()
{
	return 2.0*3.14 * r * r + 2.0 * 3.14 * r * height;
}
double Cylinder::volume()
{
	return 3.14 * r * r * height;
}
class Ball :public Shape
{
private:
	double r;
public:
	Ball() {}
	virtual void input();
	virtual double area();
	virtual double volume();
};
void Ball::input()
{
	cin >> r;
}
double Ball :: area()
{
	return 4 * 3.14 * r * r;
}
double Ball::volume()
{
	return 3.14 * r * r * r*(4.0 / 3);
}
void work(Shape* s) {

	s->input();

	cout << s->area() << " " << s->volume() << endl;

	delete s;

}

int main() {

	char c;

	while (cin >> c) {

		switch (c) {

		case 'y':

			work(new Cylinder());

			break;

		case 'c':

			work(new Cuboid());

			break;

		case 'q':

			work(new Ball());

			break;

		default:

			break;

		}

	}

	return 0;

}