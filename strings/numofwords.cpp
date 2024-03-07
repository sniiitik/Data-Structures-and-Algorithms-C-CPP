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
int main()
{
    char S[]="How are   you";
    int i;
    int wcnt=0;
    for(i=0;S[i]!='\0';i++)
    {
        if(S[i]==' ' && S[i-1]!=' ')
            wcnt++;
    }
    cout<<wcnt+1;
    return 0;
}