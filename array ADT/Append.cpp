// Header Files and namespaces
// #include<bits/stdc++.h>
//Append Funtion and insert function
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
    cout<<"The elements are:"<<endl;
    for(i=0;i<arr.length;i++)
        cout<< arr.A[i]<<" ";
}

void Append(struct Array *arr, int x)
{
    if(arr->length < arr->size)
        // arr->A[arr->length++]=x;
        arr->A[arr->length]=x;
        arr->length++;
}
int main()
{
    struct Array arr={{2,3,4,5,6},10,5};
    Append(&arr,8);
    Display(arr);
    return 0;
}

