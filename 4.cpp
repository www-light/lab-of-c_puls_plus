#include <iostream>
#include <string.h>
using namespace std;
class Score
{
private:
	string name;
	double s[4];
	double total;
	char grade;
public:
	void input();
	void Evalauate();
	void Output();
};
void Score::input()
{
	cin >> name;
	for (int i = 0; i < 4; i++)
	{
		cin >> s[i];
	}
}
void Score::Evalauate()
{
	if (s[0] <= 50 && s[1] <= 50 && s[2] <= 100 && s[3] <= 100)
	{
		total = (s[0] + s[1]) * 0.25 + (s[2] * 0.25) + s[3] * 0.5;
	}
}
void Score::Output()
{
	if ((s[0] <= 50) && (s[1] <= 50) && (s[2] <= 100) && (s[3] <= 100))
	{
		if (total <= 100&& total >= 90)
		{
			grade = 'A';
		}else if (total >= 80 && total <= 89)
		{
			grade = 'B';
		}else
		if (total >= 70 && total <= 79)
		{
			grade = 'C';
		}
		else if (total >= 60 && total <= 69)
		{
			grade = 'D';
		}
		else {
			grade = 'E';
		}
		cout << "name: " << name << ", " << "total: " << total << ", " << "grade: " << grade << endl;
	}
	else {
		cout << "error";
	}

}
int main()
{
	Score* s1 = new Score;
	s1->input();
	s1->Evalauate();
	s1->Output();
	return 0;
}
