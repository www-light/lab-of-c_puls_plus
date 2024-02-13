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
	Queue<int, 5> intQueue;   // ���Դ��5��int����Ԫ�صĶ���
	int tmp_i;
	for (int i = 0; i < 5; i++) // ����5�����������
	{
		cin >> tmp_i;
		intQueue.push(tmp_i);
	}

	for (int i = 0; i < 5; i++)
	{ // �������5������������
		if (i < 4)
			cout << intQueue.front() << ' ';
		else cout << intQueue.front() << '\n';
		intQueue.pop();
	}
	if (intQueue.empty())
		cout << "After 5 pops, intQueue is empty." << endl;

	Queue<string, 3> stringQueue; // ���Դ��3��string����Ԫ�صĶ���
	string tmp_s;
	for (int i = 0; i < 3; i++) // ����3���ַ��������
	{
		cin >> tmp_s;
		stringQueue.push(tmp_s);
	}
	cout << stringQueue.front() << '\n'; // ��������еĵ�1���ַ���
	cout << "There are " << stringQueue.size() << " elements in stringQueue." << '\n';
	stringQueue.clear(); // ��ն���
	if (stringQueue.empty())
		cout << "After clear, there are no elements in stringQueue.";

	return 0;
}