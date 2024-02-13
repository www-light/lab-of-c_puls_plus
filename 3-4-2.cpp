#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
class Vehicle
{
protected:
	char *name;
	char *color;
public:
	Vehicle(){}
	Vehicle(char *m, char *n);
	virtual void display() = 0;
};
Vehicle::Vehicle(char* m, char* n)
{
	name = new char[110];
	color = new char[110];
	strcpy(name, m);
	strcpy(color, n);
}
class Car :public Vehicle
{
private:
	int capacity;
public:
	Car(char* m, char* n, int);
	virtual void display();

};
Car::Car(char* m, char* n, int a)
{
	name = new char[110];
	color = new char[110];
	strcpy(name, m);
	strcpy(color, n);
	capacity = a;
}
void Car::display()
{
	cout << name << " " << color << " " << capacity << endl;
}
class Truck :public Vehicle
{
private:
	double capacity;
public:
	Truck(char* m, char* n, double);
	virtual void display();
};
Truck::Truck(char* m, char* n, double a) : capacity(a)
{
	name = new char[110];
	color = new char[110];
	strcpy(name, m);
	strcpy(color, n);
}
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