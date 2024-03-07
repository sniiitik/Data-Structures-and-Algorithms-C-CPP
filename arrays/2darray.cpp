// Header Files and namespaces
// #include<bits/stdc++.h>
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
    int A[3][4]={{1,2,3,4},{2,4,6,8},{1,3,5,7}};

    int *B[3];
    int i,j;
    int **C;

    B[0]=new int[4];
    B[1]=new int[4];
    B[2]=new int[4];

    //   for(i=0;i<3;i++)
    // {
    //     for(j=0;j<4;j++)
    //     {
    //         cout<<B[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    C = new int *[3];
    C[0] = new int[4];
    C[1] = new int[4];
    C[2] = new int[4];
      for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}