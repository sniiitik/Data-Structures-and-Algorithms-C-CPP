// Header Files and namespaces
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

//Code Shortners
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define len(s) (int)s.size()
#define print(x) cout<<x<<'\n'
#define endl '\n'
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll mod = 1000000007;

//Code
// double e(int x, int n)
// {
//     static double p = 1 , f = 1;
//     double r;
//     if(n==0)
//         return 1;
//     r = e(x,n-1);
//     p = p*x;
//     f = f*n;
//     return r + p/f; 
// }
//short method using horner method.
// double e(int x, int n)
// {
//     static double s;
//     if(n==0)
//         return s;
//             s = 1+ x*s / n;
//         return e(x,n-1);
// }
//iterative fun
double e(int x, int n)
{
    double s =1;
    int i;
    double num=1;
    double den=1;
    for(i=1;i<=n;i++)
    {
        num *=x;
        den *=i;
        s+= num/den;
    }
    return s;
}
int main()
{
    cout<<e(2,20);
    return 0;
}