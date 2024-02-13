#include <stdio.h>
#include <iostream>
using namespace std;
//继承权限
//类型兼容
//父的私有成员只能父的成员函数访问
class Person
{
public:
	void message();
};
class Car
{
	public:
		void output_ownercar();
	private:
		string name;
		int price;
	};
int main()
{

}