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
//	cin >> name_of_voiceActor >> gender_of_voiceActor; // ����������Ա���������Ա�
//	const voiceActor va(name_of_voiceActor, gender_of_voiceActor); // ����һ����������Ա����
//	cout << "voice actor: " << va.get_name() << ", " << va.get_gender() << '\n'; // ���������Ա���������Ա�ð�źͶ��ź������һ���ո�
//
//	string name_of_cartoon;
//	cin >> name_of_cartoon; // ���붯��Ƭ������
//	const cartoon c(name_of_cartoon, va); // ����һ��������Ƭ����
//
//	int number_of_seasons;
//	cin >> number_of_seasons; // ���뼾�ȶ���Ƭ�ļ������������7����
//	const seasonsCartoon sc(name_of_cartoon, va, number_of_seasons); // ����һ�������ȶ���Ƭ����
//
//	const cartoon * p = &c; // ָ��pָ�򶯻�Ƭ����c
//	p->print(); // �������Ƭ�����֣����õ�������Ա�����ֺ��Ա𣨲μ����������
//	cout << '\n';
//
//	p = &sc; // ָ��pָ�򼾶ȶ���Ƭ����sc
//	p->print(); // ������ȶ���Ƭ�����֣����õ�������Ա�����֡��Ա��Լ����������μ����������
//	system("pause");
//	return 0;
//}
//class stringArray {
//private:
//	string *arr; //string ���͵��ַ���
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
//		cin >> array[i];  // ����N���ַ���
//	stringArray test(array, N);   // ���ù��캯��
//	stringArray copytest(test);  // ���ÿ������캯��
//	copytest = test;     // �������صĸ�ֵ����� =
//	cout << copytest.stringsLen();  // ������N���ַ����ĳ���֮�Ͳ����
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
//	simpleMatrix m1, m2; // ��������3*3�����;������
//	cin >> m1 >> m2; // ��������������
//	cout << m1 + m2; // ���������������ӵĽ��
//	system("pause");
//	return 0;
//}
