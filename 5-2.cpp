#include<iostream>
using namespace std;
#include <iostream>
using namespace std;
template<typename T>
void Input(T *a,int len)
{
    for (int i = 0; i < len; i++)
    {
        cin >> a[i];
    }
  }
template<typename T>
void Sort(T* a, int len)
{
    for (int i = 0; i < len-1; i++)
    {
        for (int j = i+1; j < len; j++)
        {
            if (a[i] > a[j])
            {
                T temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }

        }
}

}
template<typename T>
void Output(T* a, int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    const int LEN = 5;
    int type;
    while (std::cin >> type)
    {
        switch (type)
        {
        case 0:
        {
            int a1[LEN];
            Input(a1, LEN); Sort(a1, LEN); Output(a1, LEN);
            break;
        }
        case 1:
        {
            char a2[LEN];
            Input(a2, LEN); Sort(a2, LEN); Output(a2, LEN);
            break;
        }
        case 2:
        {
            double a3[LEN];
            Input(a3, LEN); Sort(a3, LEN); Output(a3, LEN);
            break;
        }
        }
    }

    return 0;
}