#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	string a;
	cin >> a;
	sort(a.begin(), a.end(),greater<char>());
	cout << a<<endl;
	//next_permutation(a.begin(), a.end());//ÖØÅÅÁÐº¯Êý
}