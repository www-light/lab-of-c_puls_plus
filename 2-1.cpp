#include <iostream>
using namespace std;
class Date
{
private:
	int Date_year;
	int Date_month;
	int Date_day;
public:
	Date(int year = 2000, int month = 1, int day = 1);
	void show();
	~Date()
	{}
};
class Croster
{
private:
	string name;
	Date birthday;
public:
	Croster()
	{
		name = "NULL";
		birthday = Date(0, 0, 0);
	}
	Croster(string name, int year, int month, int day);
	Croster(string name, Date date);
	void show();
	~Croster()
	{

	}

};
Date::Date(int year, int month, int day)
{
	Date_year = year;
	Date_month = month;
	Date_day = day;
}
void Date::show()
{
	cout << Date_year << "-" << Date_month << "-" << Date_day << endl;
}
Croster::Croster(string m_name, int year, int month, int day):name(m_name),birthday(year,month,day)
{}
Croster::Croster(string m_name, Date date) : name(m_name)
{
	birthday = date;
}
void Croster::show()
{
	cout << "Name: " << name << "," << "Birthday: ";
		birthday.show();
}
int main()
{
	int sign;
	string name;
	int m_year, m_month, m_day;
	while (cin>>sign)
	{
		if (sign == 0)
		{
			Croster person;
			person.show();
		}
		else if (sign == 1)
		{
			cin >>name>> m_year >> m_month >> m_day;
			Croster person(name, m_year, m_month, m_day);
			person.show();
		}
		else if (sign == 2)
		{
			cin >> name >> m_year >> m_month >> m_day;
			Date w(m_year, m_month, m_day);
			Croster person(name, w);
			person.show();
		}
		else if (sign == -1)
		{
			break;
		}
	}
	return 0;
}