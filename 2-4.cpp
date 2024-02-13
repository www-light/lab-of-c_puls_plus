#include <iostream>
using namespace std;
class Date
{
public:
	Date(int d = 0, int m = 0, int y=0);
	int get_day()const;
	int get_month()const;
	int get_year()const;
	static void set_default(int, int, int);
	static int get_default_day();
	static int get_default_month();
	static int get_default_year();
	Date& add_year(int n);
	Date& add_month(int n);
	Date& add_day(int n);
private:
		int day, month, year;
	static Date default_date;
};
Date Date::default_date(1901, 1, 1);
Date::Date(int d, int m, int y)
{
	day = d;
	month = m;
	year = y;
}
int Date::get_day()const
{
	return day;
}
int Date::get_month()const
{
	return month;
}
int Date::get_year() const
{
	return year;
}
void Date::set_default(int m_year, int m_month, int m_day)
{
	default_date.day=m_day;
	default_date.month = m_month;
	default_date.year = m_year;
}
int Date::get_default_day()
{
	return default_date.day;
}
int Date::get_default_month()
{
	return default_date.month;
}
int Date::get_default_year()
{
	return default_date.year;
}
Date& Date::add_day(int n)
{
	day += n;
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 == 0))//¿¼ÂÇÈòÄê
	{
		if (month == 2)
		{
			if (day > 29)
			{
				month += 1;
				day = day - 29;
			}
			else if (month == 4 || month == 6 || month == 9 || month == 11)
			{
				if (day > 30)
				{
					month += 1;
					day = day - 30;
				}
			}
			else {
				if (day > 31)
				{
					month += 1;
					day = day - 31;
				}
			}
		}
	}
	else {
		if (month == 2)
		{
			if (day > 28)
			{
				month += 1;
				day = day - 28;
			}
			else if (month == 4 || month == 6 || month == 9 || month == 11)
			{
				if (day > 30)
				{
					month += 1;
					day = day - 30;
				}
			}
			else {
				if (day > 31)
				{
					month += 1;
					day = day - 31;
				}
			}
		}
	}
	return *this;
}
Date& Date::add_month(int n)
{
	month += n;
		if (month > 12)
		{
			year += 1;
		}
		return *this;
}
Date& Date::add_year(int n)
{
	year += n;
	return *this;
}
int main()
{
	char type[110];

	int day, mon, year;

	int addday, addmon, addyear;

	while (cin >> type)

	{

		if (strcmp(type, "Date") == 0)

		{

			cin >> day >> mon >> year;

			Date mydate(day, mon, year);

			cin >> addday >> addmon >> addyear;

			mydate.add_day(addday).add_month(addmon).add_year(addyear);

			cout << mydate.get_day() << " " << mydate.get_month() << " " << mydate.get_year() << endl;

		}

		else if (strcmp(type, "defaultDate") == 0)

		{

			cout << Date::get_default_day() << " " << Date::get_default_month() << " " << Date::get_default_year() << endl;

		}

		else if (strcmp(type, "setdefaultDate") == 0)

		{

			cin >> day >> mon >> year;

			Date::set_default(day, mon, year);

			cout << Date::get_default_day() << " " << Date::get_default_month() << " " << Date::get_default_year() << endl;

		}

	}
}