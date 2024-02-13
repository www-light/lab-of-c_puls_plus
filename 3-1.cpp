#include <iostream>
using namespace std;
class TableTennisPlayer {
private:
	string firstname;
	string lastname;
	bool hasTable;
public:
	TableTennisPlayer(const string&, const string&, bool);
	string FirstName() const;
	string LastName() const;
	bool HasTable() const;
};
class RatedPlayer:public TableTennisPlayer//公有继承
{
private:
	int rating;
public:
	RatedPlayer(int, string, string, bool);
	int Rating();
};
TableTennisPlayer::TableTennisPlayer(const string&f, const string&l, bool h)
{
	firstname = f;
	lastname = l;
	hasTable = h;
}
string TableTennisPlayer:: FirstName() const
{
	return firstname;
}
string TableTennisPlayer::LastName() const
{
	return lastname;
}
bool TableTennisPlayer::HasTable() const
{
	return hasTable;
}
//应使用初始化表完成对基类的初始化
RatedPlayer::RatedPlayer(int r, string f, string l, bool h):TableTennisPlayer(f, l, h)
{
	rating = r;
}
int RatedPlayer::Rating()
{
	return rating;
}
	int main() {

	string firstname, lastname;

	bool hasTable;

	int rating;

	char flag;

	while (cin >> flag) {

		if (flag == 'T') {

			cin >> firstname >> lastname >> hasTable;

			TableTennisPlayer tp(firstname, lastname, hasTable);

			if (tp.HasTable())

				cout << tp.FirstName() << " " << tp.LastName() << " has a table.\n";

			else

				cout << tp.FirstName() << " " << tp.LastName() << " hasn't a table.\n";

		}
		else if (flag == 'R') {

			cin >> firstname >> lastname >> hasTable >> rating;

			RatedPlayer rp(rating, firstname, lastname, hasTable);

			if (rp.HasTable())

				cout << rp.FirstName() << " " << rp.LastName() << " has a table. The rating is " << rp.Rating() << ".\n";

			else

				cout << rp.FirstName() << " " << rp.LastName() << " hasn't a table. The rating is " << rp.Rating() << ".\n";

		}

	}

	return 0;
}
