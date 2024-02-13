#include <iostream>
#include <cstring>
using namespace std;

class Array2 {
private:
    int col;
    int row;
    int** arr;
public:
    Array2(int m=0, int n=0):row(m),col(n)
    {
        if (m == 0 && n == 0)
        {
            arr = nullptr;
        }
        else {
        int     m_row = row;
         int    m_col = col;
            arr = new int*[m_col];
            for (int i = 0; i < m_col; i++)
                arr[i] = new int[m_row];
        }

    }
    Array2& operator=(Array2& m)
    {
        row = m.row;
        col = m.col;
        arr = m.arr;
        if (row == 0 && col == 0)//���ٿռ�
        {
            arr = nullptr;
        }
        else {
            int     m_row = row;
            int    m_col = col;
            arr = new int* [m_col];
            for (int i = 0; i < m_col; i++)
                arr[i] = new int[m_row];
        }
        for (int i = 0; i < row; ++i)//���ݸ���
            for (int j = 0; j < col; j++)
                arr[i][j] = m.arr[i][j];
        return *this;
    }
    int* operator[](int m)//��[]��������
    {
        return arr[m];
    }
    int&operator ()(int m,int n)//��()��������
    {
        return *(*(arr + m) + n);
     }
    ~Array2() {
        if (arr) delete[]arr;
    }

};
int main() {
    Array2 a(3, 4);
    int i, j;
    for (i = 0; i < 3; ++i)
        for (j = 0; j < 4; j++)
            a[i][j] = i * 4 + j;
    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 4; j++) {
            cout << a(i, j) << ",";
        }
        cout << endl;
    }
    cout << "next" << endl;
    Array2 b;     b = a;
    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 4; j++) {
            cout << b[i][j] << ",";
        }
        cout << endl;
    }
    return 0;
}