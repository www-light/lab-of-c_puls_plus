#include <iostream>
#include <map>
#include<algorithm>
using namespace std;
int main()
{
	map<int, int> marble;
	int n;
	int question;
	int i = 0;
	int j = 1;
	while (cin >> n >> question)
	{
		int* num = new int[n];
		int* pro = new int[question];
		for (size_t i = 0; i < n; i++)
		{
			cin >> num[i];
		}
		for (size_t i = 0; i < question; i++)
		{
			cin >> pro[i];
		}
		sort(num, num + n);
		for (size_t i = 0; i < n; i++)
		{
			marble.insert(pair<int, int>(num[i], j));
			j++;
		}
		j = 0;
		i = 0;
		while (i != question)
		{
			map<int, int>::iterator pr;
			pr = marble.lower_bound(pro[j]);
			if (pr->first == pro[j])
			{
				cout << pro[j] << "found at" << pr->second << endl;
			}
			else
			{
				cout << pro[j] << "not found" << endl;
			}
			i++;
			j++;
		}
	}
	
}