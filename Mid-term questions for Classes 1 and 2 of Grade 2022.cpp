#include <iostream>
using namespace std;
class Person {
protected: string name;
         char gender;
public:
    Person(string n, char g) : name(n), gender(g) {
}
      void display() {
          cout << "name: " << name << endl;
          cout << "gender: " << gender << endl;
      }
}
;
class Student : virtual public Person {
protected: double score;
public: Student(string n, char g, double s) : Person(n, g), score(s) {
}
      ;
}
;
class Teacher : virtual public Person {
protected: string title;
public: Teacher(string n, char g, string t) : Person(n, g), title(t) {
}
      ;
}
;
class Graduate : public Teacher, public Student {
private: double wage;
public: Graduate(string n, char g, double s, string t, double w) :Person(n,g),Student(n,g,s),Teacher(n,g,t)
{
    wage = w;
}//虚基类的构造
       void display() {
           Person::display();
           cout << "score: " << score << endl;
           cout << "title: " << title << endl;
           cout << "wages: " << wage << endl;
       }
};
int main() {
    Graduate grad1("小白", 'f', 89.5, "教授", 1234.5);
    grad1.display();
    return 0;
}