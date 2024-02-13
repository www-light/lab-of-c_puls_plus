#include <iostream>
#include <Vector>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<string> str(n);
	for (int i = 0; i < n;i++)//会导致访问越界的错误。
	{
		cin >> str[i];
	}
	/*具体来说，当i = 0时，使用str[i++]来访问str[0]，
		这是没有问题的。但是当i = 1时，
		使用str[i++]来访问str[1]时，
		由于str中只有一个元素，因此访问越界，
		会导致程序崩溃。*/
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