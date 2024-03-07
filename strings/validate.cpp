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
int Validate(char *name)
{
    int i;
    for(i=0;name[i]!='\0';i++)
    {
        if(!(name[i]>=65 && name[i]<=90)&&
            !(name[i]>=97 && name[i]<=122)&&
            !(name[i]>=48 && name[i]<=57))
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char *name="Anil?123";
    if(Validate(name))
    {
        cout<<"Valid String"<<endl;
    }
    else
        cout<<"Invalid String";
    return 0;
}