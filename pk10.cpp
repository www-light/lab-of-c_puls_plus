#include <iostream> 
using namespace std;
class MyInt
{
	int nVal;
public:
	MyInt(int n) { nVal = n; }
	MyInt& operator-(int a)
	{
		this->nVal -= a;
		return *this;
	}
	 operator int ()//类型强制转换运算符被重载  ，in为目标类型名
	{
		return nVal;
	}
};
int Inc(int n) {
	return n + 1;
}
int main() {
	int n;
	while (cin >> n) {
		MyInt objInt(n);
		objInt - 2 - 1 - 3;
		cout << Inc(objInt);
		cout << ",";
		objInt - 2 - 1;
		cout << Inc(objInt) << endl;
	}
	return 0;
}