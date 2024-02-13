#include<iostream>
using namespace std;
template <typename T>
int Search(const T* array, int arraylen, const T& value)
{
    int sign=0;
    int temp;
    for (int i = 0; i < arraylen; i++)
    {
        if (array[i] == value)
        {
            sign = 1; 
            temp = i;

        }
    }
    if (sign == 1)
    {
        return temp;
    }
    else {
        return -1;
    }
}
//template<> int Search<char>(const char* array, int arraylen, const char& value)
//{
//    int sign = 0;
//    int temp;
//    for (int i = 0; i < arraylen; i++)
//    {
//        if (strcmp)
//        {
//            sign = 1;
//            temp = i;
//
//        }
//    }
//    if (sign == 1)
//    {
//        return temp;
//    }
//    else {
//        return -1;
//    }
//}
int main()
{
    int n;
    std::cin >> n;
    int* nValues = new int[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> nValues[i];
    }
    int d;
    std::cin >> d;
    std::cout << Search(nValues, n, d) << std::endl;
    delete[] nValues;

    double f;
    std::cin >> n;
    double* dValues = new double[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> dValues[i];
    }
    std::cin >> f;
    std::cout << Search(dValues, n, f) << std::endl;
    delete[] dValues;

    std::cin >> n;
    char* cValues = new char[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> cValues[i];
    }
    char c;
    std::cin >> c;
    std::cout << Search(cValues, n, c) << std::endl;
    delete[] cValues;

    return 0;
}
