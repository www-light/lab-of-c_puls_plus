#include<iostream>
using namespace std;
class Person
{
private:
	string name;
public:
	virtual void input();
	virtual void display();
	virtual ~Person()
	{}
};
class Student :public Person
{
private:
	string name;
	string num;
private:
	virtual void input();
	virtual void display();
};
void Person::input()
{
	cin >> name;
}
void Person::display()
{
	cout << name<<endl;
}
void Student::input()
{
	cin >> name;
	cin >> num;
}
void Student::display()
{
	cout << name<<" ";
	cout << num<<endl;
}
int main()
{
	Person* p;

	p = new Person;

	p->input();

	p->display();

	delete p;

	p = new Student;

	p->input();

	p->display();

	delete p;

	return 0;
}