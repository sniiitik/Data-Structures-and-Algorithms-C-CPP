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
// int fact(int n)
// {
//     if (n==0)
//         return 1;
//     return fact(n-1)*n;
    
// }
int ifact(int n)
{
    int i;
    int s = 1;
    for(i=1;i<=n;i++)
    {
        s = s*i; 
    }
    return s;
}
int main()
{
    int r;
    r = ifact(5);
    cout<<r;
    return 0;
}