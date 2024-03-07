// Header Files and namespaces
// #include<bits/stdc++.h>
#include <iostream>
using namespace std;

// Code Shortners
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define len(s) (int)s.size()
#define print(x) cout << x << '\n'
#define endl '\n'
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

ll mod = 1000000007;

// Code
int main()
{
    int *p,*q;
    int i;
    p = new int[5];
    q = new int[10];
    p[0] = 1;
    p[1] = 2;
    p[2] = 3;
    p[3] = 4;
    p[4] = 5;

    for(i=0;i<5;i++)
        q[i]=p[i];
    free(p);
    p=q;
    q=NULL;

    for(i=0;i<5;i++)
        cout<<p[i]<<endl;

    return 0;
}
