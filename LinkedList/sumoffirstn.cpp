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
int sum(int n)
{   //using direct formula
    // return n*(n+1)/2;
    //using loop
    // int i, s = 0;
    // for(i=1;i<=n;i++)
    //     s = s+i;
    // return s;
    //using nested rec
    if(n==0)
        return 0;
    return sum(n-1)+n;
}
int main()
{
    int r;
    r = sum(5);
    cout<<r;
    return 0;
}