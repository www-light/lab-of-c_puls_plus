#include <iostream>
template <typename T, int SIZE = 5>
class Queue
{
private:
	T tmp[SIZE];
	static int  num;
public:
	void push(T m)
	{
		tmp[num] = m;
		i++;
	}
	T front()
	{
		int j = 0;
		for (int i = 0; i < SIZE; i++)
		{
			if (!tmp[i])
			{
				j++;
			}
		}
		return tmp[j - 1];
	}
	void pop()
	{
		for (int i = 0; i < SIZE; i++)
		{
			if (!tmp[i])
			{
				j++;
			}
		}
		a[j - 1] = '\0';
	}
	bool empty()
	{
		for (int i = 0; i < SIZE; i++)
		{
			if (!tmp[i])
			{
				j++;
			}
		}
		if (j != 0)
		{
			return false;
		}
		else {
			return true;
		}
	}
	int size()
	{
		for (int i = 0; i < SIZE; i++)
		{
			if (!tmp[i])
			{
				j++;
			}
		}
		return j;
	}
	void clear()
	{
		int i = 0;
		int j = 0;
		for (i = 0; i < SIZE; i++)
		{
			if (strcmp(tmp[i], '\0') == 0)
			{
				j++;
			}
		}
		for (i = 0; i < j; i++)
		{
			tmp[i] = '\0';
		}
	}
};
template <typename T, int SIZE = 5>
int Queue<T, SIZE>::num = 0;
int main()
{
	Queue<int, 5> intQueue;   // 可以存放5个int类型元素的队列
	int tmp_i;
	for (int i = 0; i < 5; i++) // 输入5个整数并入队
	{
		cin >> tmp_i;
		intQueue.push(tmp_i);
	}

	for (int i = 0; i < 5; i++)
	{ // 依次输出5个整数并出队
		if (i < 4)
			cout << intQueue.front() << ' ';
		else cout << intQueue.front() << '\n';
		intQueue.pop();
	}
	if (intQueue.empty())
		cout << "After 5 pops, intQueue is empty." << endl;

	Queue<string, 3> stringQueue; // 可以存放3个string类型元素的队列
	string tmp_s;
	for (int i = 0; i < 3; i++) // 输入3个字符串并入队
	{
		cin >> tmp_s;
		stringQueue.push(tmp_s);
	}
	cout << stringQueue.front() << '\n'; // 输出队列中的第1个字符串
	cout << "There are " << stringQueue.size() << " elements in stringQueue." << '\n';
	stringQueue.clear(); // 清空队列
	if (stringQueue.empty())
		cout << "After clear, there are no elements in stringQueue.";

	return 0;
}