#include <iostream>
using namespace std;
template<typename T>
class Vector
{
private:
	T x, y, z;
public :
	Vector(T a, T b, T c);
	Vector()
	{
		x = 0;
		y = 0;
		z = 0;
	}
	Vector(Vector<T>&);
	template<typename T>
	friend Vector<T> operator*(T d,const Vector<T>&);//是非成员函数，得加个template<typename T>
	 Vector<T> operator+(Vector<T>&);//已经是类的成员函数了
	 template<typename T>
	friend istream& operator >> (istream&, Vector<T>&);
	template<typename T>
	friend ostream& operator<<(ostream&, const Vector<T>&);
	bool operator==(Vector<T>&);//已经是类的成员函数了
};
template<typename T>
Vector<T>::Vector(T a, T b, T  c)
{
	x = a;
	y = b;
	z = c;
}
template<typename T>
Vector<T>::Vector(Vector<T>& a)
{
	x = a.x;
	y = a.y;
	z = a.z;
}
template<typename T>
Vector<T> Vector<T>::operator+(Vector<T>& a)
{
	Vector<T> num(x + a.x, y + a.y, z + a.z); \
		return num;
}
template<typename T>
Vector<T> operator*(T d, const Vector<T>& a)
{
	Vector<T> num(d * a.x, d * a.y, d * a.z);
	return num;
}
 template<typename T>
 istream& operator>>(istream& is, Vector<T>& a)
 {
	 is>> a.x >> a.y >> a.z;
	 return is;
 }
 template<typename T>
 ostream& operator<<(ostream& os, const Vector<T>& a)
 {
	 os << a.x << a.y << a.z;
	 return os;
 }
 template<typename T>
bool Vector<T>::operator==(Vector<T>& a)
 {
	return (fabs(a.x - x) < 1e-6 && fabs(a.y - y) < 1e-6 && fabs(a.z - z) < 1e-6);
 }
int main()
{
	double a, b, c;
	cin >> a >> b >> c;
	Vector<double> v1(a, b, c), v2(v1), v3, v4;
	double d;
	cin >> d;
	v4 = d * v1 + v2;
	cout << v4 << endl;
	Vector<double> v;
	cin >> v;
	int flag = (v4 == v);
	cout << flag << endl;
	return 0;
}