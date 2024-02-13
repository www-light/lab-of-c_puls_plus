#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
class MyString {
	char* p;
public:
	MyString(const char* s) {
		if (s) {
			p = new char[strlen(s) + 1];
			strcpy(p, s);
		}
		else
			p = NULL;

	}
	MyString& operator=(const MyString &s)
	{
		if (s.p) {
			p = new char[strlen(s.p) + 1];
			strcpy(p, s.p);
		}
		else
			p = NULL;
		return *this;
	}
	MyString(const MyString& s)
	{
		if (s.p) {
			p = new char[strlen(s.p) + 1];
			strcpy(p, s.p);
		}
		else
			p = NULL;
	}
	~MyString() { if (p) delete[] p; }
	void Copy(const char*m)
	{
		p = new char[strlen(m) + 1];
		strcpy(p, m);
	}
	friend ostream& operator<<(ostream& os, MyString& s)
	{
		for (int i = 0; i < strlen(s.p) + 1; i++)
		{
			os<< s.p[i];
		}
		return os;
}
};
int main()
{
	char w1[200], w2[100];
	while (cin >> w1 >> w2) {

		MyString s1(w1), s2 = s1;//需要复制构造函数
		MyString s3(NULL);
		s3.Copy(w1);
		cout << s1 << "," << s2 << "," << s3 << endl;

		s2 = w2;
		s3 = s2;//需要重载=
		s1 = s3;
		cout << s1 << "," << s2 << "," << s3 << endl;

	}
}