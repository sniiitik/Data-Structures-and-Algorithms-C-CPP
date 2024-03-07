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
void funB(int n);
void funA(int n)
{
    if(n>0)
    {
        cout<<(n);
        funB(n-1);
    }
}
void funB(int n)
{
    cout<<(n);
    funA(n/2);
}
int main()
{
    funA(20);
    return 0;
}