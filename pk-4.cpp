#include <iostream>//问
using namespace std;
class A {
public:
	int val;
	int s;
	A(int l=123,int s=0)
	{
		val = l;
		//cout << this << endl;
	}
	A& GetObj() {
		return *this;
	}
	~A() {
		
	}
};
int main()
{
	int m, n;
	A a;
	cout << a.val << endl;
	while (cin >> m >> n) {
		cout << &a << endl;//在栈区
		a.GetObj() = m;//构造一个临时的类对象
		//a.GetObj() = (A)m;
		//a.GetObj() = A(m);//强制类型转换
		cout << &a << endl;//然后临时的会被销毁
		cout << a.val << endl;
		cout << a.s << endl;
		a.GetObj() = A(n);
		cout << a.val << endl;
	}
	return 0;
}