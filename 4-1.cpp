#include <iostream>
#include<string>
using namespace std;
class Singer
{
private:
	string name;
	char gender;
	int age;
	  double score;
public:
	string getName();
	friend istream& operator>>(istream& is,  Singer& t);
	friend ostream& operator<<(ostream& os, const Singer& t);
	bool operator>(Singer& t);
	bool operator==(Singer& t);
};
string Singer::getName()
{
	return name;
}
istream& operator>>(istream& is,  Singer& t)
{
	is >> t.name >> t.gender >> t.age >> t.score;
	return is;
}
ostream& operator<<(ostream& os, const Singer& t)
{
	os << t.name << " " << t.gender << " " << t.age << " " << t.score;
	return os;
}
bool Singer::operator>(Singer& t)
{
	if (score > t.score)
	{
		return true;
	}
}
bool Singer::operator==(Singer& t)
{
	if (score == t.score)
	{
		return true;
	}
}
int main()

{

	Singer s1, s2;

	cin >> s1 >> s2;

	cout << s1 << "\n" << s2 << endl;

	if (s1 > s2)

		cout << s1.getName() << "'s score is higher than " << s2.getName() << "'s.\n";

	else if (s1 == s2)

		cout << s1.getName() << "'s score is equal to " << s2.getName() << "'s.\n";

	else

		cout << s1.getName() << "'s score is lower than " << s2.getName() << "'s.\n";

	return 0;

}