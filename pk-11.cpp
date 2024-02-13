#include <iostream> 
using namespace std;
class Point {
private:
	int x;
	int y;
public:
	Point() { };
	friend ostream& operator<<(ostream& os, Point&m)
	{
		os << m.x << "," << m.y;
		return os;
	}
	friend istream& operator>>(istream& is, Point& m)
	{
		is >> m.x >> m.y;
		return is;
	}
	// 在此处补充你的代码
};
int main()
{
	Point p;
	while (cin >> p) {
		cout << p << endl;
	}
	return 0;
}