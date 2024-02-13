#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	queue<int> card;
	cin >> n;
	for (int i = 1; i<=n; i++)
	{
		card.push(i);
	}
	while (card.size() > 1)
	{
		cout << card.front() << " ";
		card.pop();
		int temp = card.front();
		card.pop();
		card.push(temp);
	}
	cout << card.front();
}