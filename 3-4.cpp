#include <iostream>
using namespace std;
class Vehicle
{
protected:
	char name[110];
	char color[110];
public:
	Vehicle(char m[110], char n[110]);
	virtual void display()=0;
};
Vehicle::Vehicle(char m[110], char n[110])
{
	strcpy(name, m);
	strcpy(color, n);
}
class Car:public Vehicle
{
private:
	int capacity;
public:
	Car(char m[110], char n[110], int);
	virtual void display();

};
Car::Car(char m[110], char n[110], int a):Vehicle(m,n),capacity(a)
{//如果不用参数列表，就需要一个Vehicle默认构造函数
}
void Car::display()
{
	cout << name << " " << color << " " << capacity<<endl;
}
class Truck :public Vehicle
{
private:
	double capacity;
public:
	Truck(char m[110], char n[110], double);
	virtual void display();
};
Truck::Truck(char m[110], char n[110], double a) :Vehicle(m, n), capacity(a)
{}
void Truck::display()
{
	cout << name << " " << color << " " << capacity;
}
int main()

{

	Vehicle* p;

	char type;

	char name[110], color[110];

	int pas;

	double cap;

	while (cin >> type)

	{

		cin >> name >> color;

		if (type == 'C')

		{

			cin >> pas;

			Car car(name, color, pas);

			p = &car;

			p->display();

		}

		else if (type == 'T')

		{

			cin >> cap;

			Truck truck(name, color, cap);

			p = &truck;

			p->display();

		}

	}

	return 0;

}