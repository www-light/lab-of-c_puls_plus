#include<iostream>
using namespace std;
class Hotel
{
private:
	int id;
	string name;
public:
	Hotel();
	string getName();
	static int getTotal();
	void print();
	void add(string m_name);
	static int total;
};
int Hotel::total = 0;//需要对静态成员变量进行初始化
Hotel::Hotel()
{}
string Hotel::getName()
{
	return name;
}
int Hotel::getTotal()
	{
		return total;
	}
void Hotel::add(string m_name)
{
	total++;
	name = m_name;
	id = total;
}
void Hotel::print()
{
	cout << name << "   " << id << endl;
}
int main()
{
	Hotel h[100];

	h[0].add("Susan");

	h[1].add("Peter");

	h[2].add("John");

	h[3].add("Mary");

	h[4].add("Alice");

	string name;

	cin >> name;

	for (int i = 0; i < Hotel::getTotal(); i++)

	{

		if (h[i].getName() == name)

		{

			h[i].print();

			break;

		}

	}

	return 0;
}