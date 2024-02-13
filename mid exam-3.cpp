//考察的是公有继承和纯虚函数，以及通过基类指针来调用派生类的函数
#include <iostream>
using namespace std;
class Animal
{
private:
    string type;
    string color;
public:
    Animal(string a, string b):type(a),color(b)
    {}
    string get_type()
    {
        return type;
    }
    string get_color()
    {
        return color;
    }
    virtual void Print() = 0;
};
class Bird:public Animal
{
private:
    bool daytime;
public:
    Bird(string a ,string b,bool c):Animal(a,b),daytime(c)
    {}
    virtual void Print()
    {
        cout << "type: " << this->get_type() << ", " << "color: " << this->get_color() << ", " << "Osteichthyes: " << daytime << endl;
    }
};
class Fish :public Animal
{
private:
    bool Osteichthyes;
public:
    Fish(string a, string b, bool c):Animal(a, b), Osteichthyes(c)
    {}
    virtual void Print()
    {
        cout << "type: " << this->get_type() << ", " << "color: " << this->get_color() << ", " << "Osteichthyes: " << Osteichthyes << endl;
    }
};
int main()
{
    Animal* animal;
    string type, color;
    bool Osteichthyes, daytime;
    cin >> type >> color >> Osteichthyes;
    Fish fish(type, color, Osteichthyes);
    fish.Print();
    animal = &fish;
    animal->Print();
    cin >> type >> color >> daytime;
    Bird bird(type, color, daytime);
    bird.Print();
    animal = &bird;
    animal->Print();
    /*将Bird对象的地址赋值给了一个Animal指针变量animal，
    这是因为Bird是Animal的派生类，
    可以将Bird对象看作是Animal对象的一种特殊形式。
    通过将Bird对象的地址赋值给Animal指针变量，
    可以实现将Bird对象当作Animal对象来使用。

最后调用了Animal对象的Print函数，
由于animal指向的是Bird对象，因此会自动调用Bird类中的Print函数，
输出鸟的信息。这就是多态的体现，通过基类指针来调用派生类的函数，
实现了动态绑定。*/
    return 0;
}