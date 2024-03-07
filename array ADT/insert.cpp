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
    cout<<"The Elements of the array is:";
    for(i=0;i<arr.length;i++)
        cout<<arr.A[i]<<' ';
}

void Insert(struct Array *arr, int index, int x)
{
    int i;
    if(index>=0 && index<arr->length)
       {for(i=arr->length;i>index;i--)
            arr->A[i]=arr->A[i-1];
        arr->A[index]=x;
        arr->length++;
       }
}

void Insert1(struct Array arr, int index, int x)
{
    int i;
}

int main()
{
    struct Array arr={{1,2,3,4,5},10,5};
    Insert(&arr,0,9);
    Display(arr);
    return 0;
}