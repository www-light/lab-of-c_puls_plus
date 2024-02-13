#include<iostream>
using namespace std;
class Sample
{
public:
	int v;
	Sample(int i=0):v(i)
	{}
	Sample(Sample&b)
	{
		v = 2 + b.v;
	};
};
void PrintAndDouble(Sample o)
{
	cout << o.v;
	cout << endl;
}
int main()
{
	Sample a(5);
	Sample b = a;
	PrintAndDouble(b);//实参b以传值方式初始化形参o，又调用一次复制构造函数
	Sample c = 20;
	PrintAndDouble(c);
	Sample d;
	d = a;
	cout << d.v;
	return 0;
}