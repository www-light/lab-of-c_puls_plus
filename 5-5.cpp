#include <iostream>
using namespace std;
template<class T, int SIZE = 20>//模板也分为形参参数列表，实参参数列表
class Stack
{
private:
	T array[SIZE];
	int top;
public:
	Stack();
    void Push(const T&);
		T Pop();
	void Clear();
	const T& Top()const;
    bool Empty()const;
    bool Full()const;
	int Size();
};
template<typename T, int SIZE>//注意
Stack<T, SIZE>::Stack()
{
    top = 0;
}
template<typename T, int SIZE>
void Stack<T, SIZE>::Push(const T&m)
{
    top++;
    array[top - 1] = m;
}
template<typename T, int SIZE>
T Stack<T, SIZE>::Pop()
{
    top--;
    return array[top -1];
}
template<typename T, int SIZE>
void Stack<T, SIZE>::Clear()
{
    top = 0;
}
template<typename T, int SIZE>
const T& Stack<T, SIZE>::Top()const
{
    return array[top - 1];
}
template<typename T, int SIZE>
bool Stack<T, SIZE>::Empty()const
{
    return top == 0;
}
template<typename T, int SIZE>
bool Stack<T, SIZE>::Full() const
{
    return top == SIZE;
}
template<typename T, int SIZE>
int Stack<T, SIZE>::Size()
{
    return SIZE;
}
    int main()
    {
        Stack<int, 10> intStack;//模板实例化；

        int n;
        cin >> n; //n<=10
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            intStack.Push(temp);
        }

        for (int i = 0; i < n; i++)
        {
            cout << intStack.Top() << " ";
            intStack.Pop();
        }
        cout << endl;

        if (intStack.Empty())
            cout << "Now, intStack is empty." << endl;

        Stack<string, 5> stringStack;
        stringStack.Push("One");
        stringStack.Push("Two");
        stringStack.Push("Three");
        stringStack.Push("Four");
        stringStack.Push("Five");
        cout << "There are " << stringStack.Size() << " elements in stringStack." << endl;
        stringStack.Clear();
        if (stringStack.Empty())
            cout << "Now, there are no elements in stringStack" << endl;

        return 0;
    }