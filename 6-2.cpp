#include <iostream>
#include <Vector>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<string> str(n);
	for (int i = 0; i < n;i++)//�ᵼ�·���Խ��Ĵ���
	{
		cin >> str[i];
	}
	/*������˵����i = 0ʱ��ʹ��str[i++]������str[0]��
		����û������ġ����ǵ�i = 1ʱ��
		ʹ��str[i++]������str[1]ʱ��
		����str��ֻ��һ��Ԫ�أ���˷���Խ�磬
		�ᵼ�³��������*/
	for (int i = 0; i < n; i++)
	{
		sort(str[i].begin(), str[i].end());
	}
	sort(str.begin(), str.end(), greater<string>());
	vector<string>::iterator pr;
	for (pr = str.begin(); pr != str.end(); ++pr)
	{
		cout << *pr<<endl;
	}
	return 0;
}