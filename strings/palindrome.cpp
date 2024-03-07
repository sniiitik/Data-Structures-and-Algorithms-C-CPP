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
    char A[]="olo";
    char B[5],t;
    int i,j;
    for(j=0;A[j]!='\0';j++)
    {

    }
    j = j-1;
    for(i=0;i<j;i++,j--)
    {
        t=A[i];
        A[i]=A[j];
        A[j]=t;
    }
    cout<<"The string is:"<<A<<endl;
    if(A[j]==A[i])
        cout<<"The string is palindrome"<<endl;
    else
        cout<<"String is not a palindrome";
        
    return 0;
}