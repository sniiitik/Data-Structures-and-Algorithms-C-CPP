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
//using loop
// int fib(int n)
// {
//     int t0=0,t1=1,s=0,i;
//     if(n<=1)
//         return n;
    
//     for(i=2;i<=n;i++)
//     {
//         s=t0+t1;
//         t0=t1;
//         t1=s;
//     }
//     return s;
// }
//rec fun
// int rfib(int n)
// {
//     if(n<=1)
//         return n;
//     return rfib(n-2)+rfib(n-1);
// }
//fun using memorization
int F[10];
int fib(int n)
{
    if(n<=1)
    {    F[n] = n;
        return n;
    }
    else
    {
        if(F[n-2]==-1)
            F[n-2] = fib(n-2);
        if(F[n-1]==-1)
            F[n-1] = fib(n-1);
        F[n]=F[n-2]+F[n-1];
    return F[n-2]+F[n-1];
    }

}
int main()
{
    int i;
    for(int i=0;i<10;i++)
        F[i]=-1;
    cout<<fib(6);
    return 0;
}