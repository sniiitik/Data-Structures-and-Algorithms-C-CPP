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
struct Array
{
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr)
{
    int i;
    cout<<"The Elements are:"<<endl;
    for(i=0;i<arr.length;i++)
        cout<<arr.A[i];
}
int IsSorted(struct Array arr)
{
    int i;
    for(i=0;i<arr.length-1;i++)
        {if(arr.A[i]>arr.A[i+1])
            return 0;
        }
        return 1;
}
int main()
{
    struct Array arr={{1,2,3,4,5},10,5};
    cout<<IsSorted(arr)<<endl;
    Display(arr);
    return 0;
}