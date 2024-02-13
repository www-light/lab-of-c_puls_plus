#include <iostream>
#include <Vector>
using namespace std;
class Sport
{
private:
    string name;
    int num;
public:
    Sport(string name, int num);
    string get_name();
    int get_number_of_participants();
};
Sport::Sport(string m_name, int m_num)
{
    name = m_name;
    num = m_num;
}
string Sport::get_name()
{
    return name;
}
int Sport::get_number_of_participants()
{
    return num;
}
class SportsMeet
{
private:
    vector<Sport> list;
   
public:
    void add_sport(Sport);
    static int get_number();
    vector<Sport> get_sports();
    static int num;
};
void SportsMeet::add_sport(Sport m)
{
    num++;
    list.push_back(m);
}
int SportsMeet::get_number()
{
    return num;
}
vector<Sport> SportsMeet::get_sports()
{
    return list;
}
int SportsMeet::num = 0;
int main()
{
    SportsMeet freshman_sports;   // �����˶��� 
    string sport_name;   // ĳ���˶����� 
    int number_of_participants; // �μ�ĳ���˶������� 
    while (cin >> sport_name >> number_of_participants && number_of_participants != 0)
    {
        freshman_sports.add_sport(Sport(sport_name, number_of_participants)); // ���ĳ���˶����˶�����Ŀ�б��� 
    }

    int number = SportsMeet::get_number();   // �˶����е���Ŀ�� 
    vector<Sport> sports = freshman_sports.get_sports();  // �˶�����Ŀ�б� 

    cout << number << '\n';   // ����˶������Ŀ�� 
    for (int i = 0; i < number; i++)  // ���ÿ���˶���Ŀ�����ƺͲμ����� 
        cout << sports[i].get_name() << ' ' << sports[i].get_number_of_participants() << '\n';

    return 0;
}