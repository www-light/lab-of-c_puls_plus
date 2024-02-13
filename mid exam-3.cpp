//������ǹ��м̳кʹ��麯�����Լ�ͨ������ָ��������������ĺ���
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
    /*��Bird����ĵ�ַ��ֵ����һ��Animalָ�����animal��
    ������ΪBird��Animal�������࣬
    ���Խ�Bird��������Animal�����һ��������ʽ��
    ͨ����Bird����ĵ�ַ��ֵ��Animalָ�������
    ����ʵ�ֽ�Bird������Animal������ʹ�á�

��������Animal�����Print������
����animalָ�����Bird������˻��Զ�����Bird���е�Print������
��������Ϣ������Ƕ�̬�����֣�ͨ������ָ��������������ĺ�����
ʵ���˶�̬�󶨡�*/
    return 0;
}