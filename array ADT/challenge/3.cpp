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
//find out duplicates in sorted array
struct Array
{
    int A[100];
    int size;
    int length;
};
void Display(struct Array arr)
{
    int i;
    cout<<"The elements are"<<endl;
    for(i=0;i<arr.length;i++)
        cout<<arr.A[i];
}
void Duplicate(struct Array arr)
{
    int i;
    int lastDup=0;
    for(i=0;i<arr.length;i++)
    {
        if(arr.A[i]==arr.A[i+1]&&arr.A[i]!=lastDup)
            {
                cout<<arr.A[i]<<" "<<endl;
                lastDup=arr.A[i];
            }
    }
}
void NumDuplicate(struct Array arr)
{
    int i,j;
    int n = arr.length-1;
    for(i=0;i<n;i++)
    {
        if(arr.A[i]==arr.A[i+1])
        {
            j=i+1;
            while(arr.A[j]==arr.A[i])j++;
            cout<<"Duplicates are"<<arr.A[i]<<endl;
            cout<<j-i<<endl;
            i=j-1;
        }
    }
}
int main()
{
    struct Array arr={{1,2,3,4,4,5,6,7,7,7,8},10,11};
    Duplicate(arr);
    // NumDuplicate(arr);

    return 0;
}