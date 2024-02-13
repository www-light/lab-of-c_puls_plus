#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
//class voiceActor
//{
//private:
//	string name_of_voiceActor;
//	string gender_of_voiceActor;
//public:
//	voiceActor(string a, string b) :name_of_voiceActor(a), gender_of_voiceActor(b)
//	{}
//	string get_name() const
//	{
//		return name_of_voiceActor;
//	}
//	string get_gender() const
//	{
//		return gender_of_voiceActor;
//	}
//
//};
//class cartoon
//{
//protected:
//	string name_of_cartoon;
//	voiceActor one;
//public:
//	cartoon(string a, voiceActor b):name_of_cartoon(a),one(b)
//	{}
//	virtual void print() const
//	{
//		cout << "cartoon name: " << name_of_cartoon << "," << "voice actor: " << one.get_name() << "," << one.get_gender() << endl;
//	}
//
//};
//class seasonsCartoon:public cartoon
//{
//private:
//	int number_of_seasons;
//	voiceActor one;
//public:
//	seasonsCartoon(string c, voiceActor a, int b) :cartoon(c, a), number_of_seasons(b), one(a)
//
//	{
//
//	}
//	virtual void print() const
//	{
//		cout << "cartoon name: " << name_of_cartoon <<  "voice actor: " << one.get_name() << "," << one.get_gender() << "number of seasons: "<<  number_of_seasons << endl;
//	}
//};
//int main() {
//	string name_of_voiceActor, gender_of_voiceActor;
//	cin >> name_of_voiceActor >> gender_of_voiceActor; // 输入配音演员的姓名和性别
//	const voiceActor va(name_of_voiceActor, gender_of_voiceActor); // 定义一个常配音演员对象
//	cout << "voice actor: " << va.get_name() << ", " << va.get_gender() << '\n'; // 输出配音演员的姓名和性别，冒号和逗号后面各有一个空格
//
//	string name_of_cartoon;
//	cin >> name_of_cartoon; // 输入动画片的名字
//	const cartoon c(name_of_cartoon, va); // 构造一个常动画片对象
//
//	int number_of_seasons;
//	cin >> number_of_seasons; // 输入季度动画片的季度数（比如第7季）
//	const seasonsCartoon sc(name_of_cartoon, va, number_of_seasons); // 构造一个常季度动画片对象
//
//	const cartoon * p = &c; // 指针p指向动画片对象c
//	p->print(); // 输出动画片的名字，所用的配音演员的名字和性别（参见输出样例）
//	cout << '\n';
//
//	p = &sc; // 指针p指向季度动画片对象sc
//	p->print(); // 输出季度动画片的名字，所用的配音演员的名字、性别，以及季度数（参见输出样例）
//	system("pause");
//	return 0;
//}
//class stringArray {
//private:
//	string *arr; //string 类型的字符串
//	int num;
//public:
//	stringArray(string *m, int n)
//	{
//		arr = new string[n];
//		num = n;
//		for (int i = 0; i < num; i++)
//		{
//			arr[i] = m[i];
//		}
//	}
//	stringArray(stringArray &a)
//	{
//		arr = new string[a.num];
//		num = a.num;
//		for (int i = 0; i < num; i++)
//		{
//			arr[i] = a.arr[i];
//		}
//	}
//	stringArray&operator=(stringArray a)
//	{
//		arr = new string[a.num];
//		num = a.num;
//		for (int i = 0; i < num; i++)
//		{
//			arr[i] = a.arr[i];
//		}
//		return *this;
//	}
//	int stringsLen()
//	{
//		int sum=0;
//		for (int i = 0; i < num; i++)
//		{
//			sum += arr[i].length();
//		}
//		return sum;
//	}
//};
//int main()
//{
//	int N;
//	cin >> N;
//	string * array = new string[N];
//	for (int i = 0; i<N; i++)
//		cin >> array[i];  // 输入N个字符串
//	stringArray test(array, N);   // 调用构造函数
//	stringArray copytest(test);  // 调用拷贝构造函数
//	copytest = test;     // 调用重载的赋值运算符 =
//	cout << copytest.stringsLen();  // 计算这N个字符串的长度之和并输出
//
//	delete[] array;
//	system("pause");
//	return 0;
//}
//class simpleMatrix
//{
//private:
//	int  one[3][3];
//public:
//	friend  istream& operator >> (istream& is, simpleMatrix& a)
//	{
//		for (int i = 0; i < 3; i++)
//		{
//			for (int j = 0; j < 3; j++)
//			{
//				is >> a.one[i][j];
//			}
//		}
//		return is;
//	}
//	simpleMatrix  operator+(simpleMatrix& a)
//	{
//		simpleMatrix sum;
//		for (int i = 0; i < 3; i++)
//		{
//			for (int j = 0; j < 3; j++)
//			{
//				sum.one[i][j] = this->one[i][j] + a.one[i][j];
//			}
//		}
//		return  sum;
//	}
//	friend  ostream& operator << (ostream& os, simpleMatrix& a)
//	{
//		for (int i = 0; i < 3; i++)
//		{
//			for (int j = 0; j < 3; j++)
//			{
//				os << a.one[i][j] << " ";
//			}
//			os << endl;
//		}
//		return os;
//	}
//};
//
//int main() {
//	simpleMatrix m1, m2; // 定义两个3*3的整型矩阵对象
//	cin >> m1 >> m2; // 输入这两个矩阵
//	cout << m1 + m2; // 输出这两个矩阵相加的结果
//	system("pause");
//	return 0;
//}
