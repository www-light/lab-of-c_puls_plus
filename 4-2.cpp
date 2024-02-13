#include <iostream>
using namespace std;
class Sales_data {

	//依次输入书号、销量和收入

	friend istream& operator>>(istream&, Sales_data&);

	//依次输出书号、销量、收入和均价

	friend ostream& operator<<(ostream&, const Sales_data&);

	friend bool operator==(const Sales_data&, const Sales_data&);

	friend bool operator!=(const Sales_data&, const Sales_data&);

	// for "+", assume that both objects refer to the same book

	friend Sales_data operator+(const Sales_data&, const Sales_data&);

public:

	Sales_data() : units_sold(0), revenue(0.0) {}

	Sales_data(const string& s, unsigned n, double r) : bookNo(s), units_sold(n), revenue(r) {}

	string get_bookNo() const;

	// for "+=", assume that both objects refer to the same book

	Sales_data& operator+=(const Sales_data&);

private:

	double avg_price() const;  //均价，等于收入除以销量

	string bookNo;        //书号

	unsigned units_sold; //销量

	double revenue;      //收入

};
double Sales_data::avg_price() const
{
	return revenue / units_sold;
}
istream& operator>>(istream& is, Sales_data& a)
{
	is >> a.bookNo >> a.units_sold >> a.revenue;
	return is;
}
ostream& operator<<(ostream& os, const Sales_data& a)
{
	os << a.bookNo <<" "<< a.units_sold << " " << a.revenue;
	return os;
}
bool operator == (const Sales_data & a, const Sales_data& b)
{
	if (a.avg_price() == b.avg_price()&&a.units_sold==b.units_sold)
	{
		return true;
	}
	else {
		return false;
	}
}
bool operator!=(const Sales_data& a, const Sales_data& b)
{
	int sign = 0;
	if (a.avg_price() != a.avg_price() )
	{
		sign = 1;
		cout << sign<<endl;
		return true;
	}
	else if (a.units_sold != b.units_sold)
	{
		return true;
	}
	else
	{
		return false;
	}
}
Sales_data operator+(const Sales_data& m, const Sales_data& n)
{
	Sales_data a;
	a.bookNo = m.bookNo;
	a.units_sold = m.units_sold + n.units_sold;
	a.revenue = m.revenue + n.revenue;
	return a;
}
string Sales_data::get_bookNo()const
{
	return bookNo;
}
Sales_data& Sales_data::operator+=(const Sales_data& m)
{
	 units_sold += m.units_sold;
	 revenue += m.revenue;
	 return *this;
}
int main() {

	Sales_data item1, item2;

	while (cin >> item1 >> item2) {

		cout << item1 << "\n" << item2 << "\n";

		if (item1 == item2)

			cout << item1.get_bookNo() << " equals " << item2.get_bookNo() << "\n";

		if (item1 != item2)

			cout << item1.get_bookNo() << " doesn't equal " << item2.get_bookNo() << "\n";

		cout << (item1 + item2) << "\n";

		item1 += item2;

		cout << item1 << "\n";

	}

	return 0;

}