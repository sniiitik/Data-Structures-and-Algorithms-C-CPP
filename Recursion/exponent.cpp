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
// int power(int m, int n)
// {
//     if(n==0)
//         return 1;
//     return power(m,n-1)*m;
// }
int power(int m, int n)
{
    if(n==0)
        return 1;
    if(n % 2 == 0)
        return power(m*m, n/2);
    else
        return m*power(m*m, (n-1)/2);
}
int main()
{
    int r;
    r = power(9,3);
    cout<<(r);
    return 0;
}