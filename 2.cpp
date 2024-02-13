#include <iostream>
#include <string.h>
using namespace std;
#define _CRT_SECURE_NO_WARNINGS
class Book
{
private:
	char name[200];
	char author[200];
	int sale;
public:
	Book();//默认构造函数
	Book(char* m_name, char* m_author, int m_sale);//构造函数
	Book(const Book&);//深拷贝
	void print();//
	~Book()
	{
	}
};
Book::Book()
{
	strcpy(name, "No name");
	strcpy(author, "No author");
	sale = 0;
}
Book::Book(char* m_name, char* m_author, int m_sale)
{
	strcpy(name, m_name);
	strcpy(author, m_author);
	sale = m_sale;
}
Book::Book(const Book& newone)
{
	strcpy(name, newone.name);
	strcpy(author, newone.author);
	sale = newone.sale;
}
void Book::print()
{
	cout << "Name:" << name << endl << " " << "Author:" << author << " " << "Sale:" << sale << endl;
}
int main()
{
	char bookname[105];
	char authorname[105];
	int total;
	cin >> bookname >> authorname >> total;
	if (strcmp(bookname, "-1") == 0 && strcmp(authorname, "-1") == 0 && total == -1)
	{
		Book one;
		one.print();
	}
	else if (strcmp(bookname, "0") == 0 && strcmp(authorname, "0") == 0 && total == 0)
	{
		Book bk1;
		Book bk2(bk1);
		bk2.print();
	}
	else {
		Book one(bookname, authorname, total);
		one.print();
	}
	return 0;
}