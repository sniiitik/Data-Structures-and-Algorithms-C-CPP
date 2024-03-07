// Header Files and namespaces
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

// Code
struct Matrix
{
    int A[10];
    int n;
};
void Set(struct Matrix *m, int i, int j, int x)
{
    if (i == j)
        m->A[i - 1] = x;
}
int Get(struct Matrix m, int i, int j)
{
    if (i == j)
        return m.A[i - 1];
    else
        return 0;
}
void Display(struct Matrix m)
{
    int i, j;
    for (i = 0; i < m.n; i++)
    {
        for (j = 0; j < m.n; j++)
        {
            if (i == j)
                cout << (m.A[i - 1]) << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
}
int main()
{
    struct Matrix m;
    m.n = 4;
    Set(&m, 1, 1, 5);
    Set(&m, 2, 2, 4);
    Set(&m, 3, 3, 7);
    Set(&m, 4, 4, 8);
    Display(m);
    return 0;
}