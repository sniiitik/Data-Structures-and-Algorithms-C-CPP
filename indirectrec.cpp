// Header Files and namespaces
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Code
void funB(int n);
void funA(int n)
{
    if (n > 0)
    {
        cout << (n);
        funB(n - 1);
    }
}
void funB(int n)
{
    cout << (n);
    funA(n / 2);
}
int main()
{
    funA(20);
    return 0;
}