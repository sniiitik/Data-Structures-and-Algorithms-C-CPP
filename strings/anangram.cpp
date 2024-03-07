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
    char A[]="medical";
    char B[]="decimal";
    int H[26]={0};
    int i;
    for(i=0;A[i]!='\0';i++)
    {
        H[A[i]-97]++;
    }
    for(i=0;B[i]!='\0';i++)
    {
        H[B[i]-97]--;
        if(H[B[i]]<0)
        {
            cout<<"Its not an Anagram"<<endl;
            break;
        }
    }
    if(B[i]=='\0')
        cout<<"It is an Anagram"<<endl;
    return 0;
}