#include <iostream>
using namespace std;
class Subject
{
private:
	double score[3];
	const int SMath=4, SEng=2, SCpp=2;
public:
	Subject(int math = 0, int eng = 0, int cpp = 0);
	void Input();
	friend class Student;//an access Subject private partB
};
class Student
{
private:
	string ID;
	string name;
	double GPA;
public:
	Student(string id = "00000", string na = "Noname");
		void CalculateGPA(const Subject& sub);
		void Input();
		void Show(const Subject& sub) const;
};
Subject::Subject( int m_math,  int m_Eng, int m_cpp):SMath(4),SEng(2),SCpp(2)
{
}
void Subject::Input()
{
    cin >> score[0] >> score[1] >> score[2];
}
Student::Student(string id, string na)
{
    ID = id;
    name = na;
}
void Student::CalculateGPA(const Subject& sub)
{
    GPA =( 4 * sub.score[0] + 2 * sub.score[1] + 2 *sub.score[2])/(4.0+2.0+2.0);
}
void Student::Input()
{
    cin >> ID >> name;

}
void Student::Show(const Subject& sub)const
{
    cout << ID << endl << name << endl<<sub.score[0] << endl << sub.score[1] << endl << sub.score[2] << endl << GPA << endl;
}
int main()
{
    int n;        //学生人数
    cin >> n;
    Student* stu = new Student[n];
    Subject* sub = new Subject[n];
    for (int i = 0; i < n; i++)
    {
        stu[i].Input();
        sub[i].Input();
    }
    for (int i = 0; i < n; i++)
    {
        stu[i].CalculateGPA(sub[i]);
        stu[i].Show(sub[i]);
    }
    delete[] stu;
    delete[] sub;
    return 0;
}