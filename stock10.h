// stock10.h 
#ifndef STOCK10_H 
#define stockol_H_
#include<string>
using namespace std;

class Stock
{
private:
	std:: string company;
	long shares;
	double share_val;
	double total_varl;
	void set_tot() 
	{ total_varl = shares * share_val; }
public:
	Stock();//ddfult construction 默认构造函数
	Stock(const std::string& co, long n = 0, double pr = 0);
    ~Stock();
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show();
};
#endif
