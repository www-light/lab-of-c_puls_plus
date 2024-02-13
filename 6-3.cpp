#include <iostream>
#include <List>
#include <algorithm>
using namespace std;
struct Student {
    int no;
    string name;
};
void Input(list<Student>&li)
{
    int n;
    cin >> n;
    Student temp;
    for (size_t i = 0; i < n; i++)
    {
        cin >> temp.no >> temp.name;
        li.insert(li.end(), temp);
        //or li.push_back(temp);
    }
}
void Show(list<Student>& li)
{
    list<Student>::iterator pr;
    for (pr = li.begin(); pr!=li.end(); pr++)
    {
        cout << pr->no<<" "<<pr->name << endl;
    }
}
int main()
{
    std::list<Student> li;

    Input(li); // ‰»Î
    Show(li); // ‰≥ˆ

    return 0;
}