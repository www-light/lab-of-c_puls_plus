#include<iostream>
using namespace std;
class CPU
{
private:
    string cpuType;
    double frequency;
    public:
        CPU()
        {}
        CPU(string, double);
        string get_cputype();
        double get_frequency();
};
CPU::CPU(string a, double b) :cpuType(a), frequency(b)
{
}
string CPU::get_cputype()
{
    return cpuType;
}
double CPU::get_frequency() {
    return frequency;
}
class Disk
{
private:
    string disktype;
    double capacity;
public:
    Disk()
    {
    }
    Disk(string, double);
    string get_diskType();
    double get_capacity();
};
Disk::Disk(string a, double b)
{
    disktype = a;
    capacity = b;
}
string Disk::get_diskType()
{
    return disktype;
}
double Disk::get_capacity()
{
    return capacity;
}
class Computer
{
private:
    CPU a;
    Disk b;
public:
    Computer()
    {}
    Computer(CPU, Disk);
    void Print();
};
Computer::Computer(CPU m, Disk n)
{
    a = m;
    b = n;
}
void Computer::Print()
{
    cout << "The computer has a cpu and a disk." << endl;
    cout<< "CPU type: " << a.get_cputype() << "£¬ " << "CPU frequency: " << a.get_frequency()<<endl;
    cout << "disk type: " << b.get_diskType() << ", " << "disk capacity: " << b.get_capacity() << endl;
}
int main()
{
    string cpuType, diskType;
    double frequency, capacity;
    cin >> cpuType >> frequency >> diskType >> capacity;
    CPU cpu(cpuType, frequency);
    Disk disk(diskType, capacity);
    Computer computer(cpu, disk);

    computer.Print();
    return 0;
}