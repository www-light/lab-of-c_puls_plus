#include <iostream>//��
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
		cout << &a << endl;//��ջ��
		a.GetObj() = m;//����һ����ʱ�������
		//a.GetObj() = (A)m;
		//a.GetObj() = A(m);//ǿ������ת��
		cout << &a << endl;//Ȼ����ʱ�Ļᱻ����
		cout << a.val << endl;
		cout << a.s << endl;
		a.GetObj() = A(n);
		cout << a.val << endl;
	}
	return 0;
}