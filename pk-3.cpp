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
	PrintAndDouble(b);//ʵ��b�Դ�ֵ��ʽ��ʼ���β�o���ֵ���һ�θ��ƹ��캯��
	Sample c = 20;
	PrintAndDouble(c);
	Sample d;
	d = a;
	cout << d.v;
	return 0;
}