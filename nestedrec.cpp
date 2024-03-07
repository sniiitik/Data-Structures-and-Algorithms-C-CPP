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
int fun(int n)
{
    if(n>100)
        return (n-10);
    return fun(fun(n+11));
}
int main()
{
    int r;
    r = fun(95);
    cout<<(r);
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
            

    }
    return 0;
}