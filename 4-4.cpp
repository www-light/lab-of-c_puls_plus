#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<string>
using namespace std;
class String
{
private:
	char* s;
public:
	String()
	{
		s = new char[100];
		memset(s, 0, sizeof(s));
	}
	String(const char*);
	String(const String&);
	~String(){}
	String& operator=(const char*);
	String& operator=(const String&);
	String operator+(const char*);
	String operator+(const String&);
	String& operator+=(const char*);
	String& operator+=(const String&);
	friend istream& operator>>(istream&, String&);
	friend ostream& operator<<(ostream&, const String&);
	friend bool operator==(const String&, const char*);
	friend bool operator==(const String&, const String&);
	friend bool operator!=(const String&, const char*);
	friend bool operator!=(const String&, const String&);
};
String::String(const char* m)//遇到至指针传值，就要狠狠开数组
{
	s = new char[strlen(m) + 1];
	strcpy(s, m);
}
String::String(const String& m)
{
	s = new char[strlen(m.s) + 1];
	strcpy(s, m.s);
}
String& String::operator=(const char*m)
{
	m = new char[strlen(m)+1];
	for (int i = 0; i < strlen(s) + 1; i++)
	{
		s[i] = m[i];
	}
	return *this;
}
String& String::operator=(const String&m)
{
	s = m.s;
	return *this;
}
String String::operator+(const char* m)
{
	char* temp = new char(strlen(m) + 1);
	strcat(this->s, m);
	this->s[strlen(s) +1]= '\0';
	return *this;
}
String String::operator+(const String& m)
{
	char* temp;
	temp = new char(strlen(m.s) + 1);
	strcpy(temp, m.s);
	strcat(this->s, m.s);
	this->s[strlen(s) + 1] = '\0';
	return *this;
}
String& String::operator+=(const char*m)
{
	*this = *this+m;
	return *this;
}
String& String::operator+=(const String&m)
{
	*this = *this + m;
	return *this;
}
istream& operator>>(istream& is, String& m)
{
	is >> m.s;
	return is;
}
ostream& operator<<(ostream& os,const String& m)
{
	os << m.s;
	return os;
}
bool operator==(const String& m, const char* n)
{
	if (strcmp(m.s, n) == 0)
	{
		return true;
	}
	else {
		return false;
	}
}
bool operator==(const String& m, const String&  n)
{
	if (strcmp(m.s, n.s) == 0)
	{
		return true;
	}
	else {
		return false;
	}
}
bool operator!=(const String& m, const char* n)
{
	if (strcmp(m.s, n) != 0)
	{
		return true;
	}
	else {
		return false;
	}
}
bool operator!=(const String& m, const String& n)
{
	if (strcmp(m.s, n.s) != 0)
	{
		return true;
	}
	else {
		return false;
	}
}
int main()
{
	String s;
	s += "hello";
	cout << s << endl;
	String s1("String1");
	String s2("copy of ");
	s2 += "String1";
	cout << s1 << "\n" << s2 << endl;
	String s3;
	cin >> s3;
	cout << s3 << endl;
	String s4("String4"), s5(s4);
	cout << (s5 == s4) << endl;
	cout << (s5 != s4) << endl;
	String s6("End of "), s7("my string.");
	s6 += s7;
	cout << s6 << endl;
	return 0;
}