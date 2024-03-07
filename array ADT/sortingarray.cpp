// Header Files and namespaces
// #include<bits/stdc++.h>
//inserting element in a certain position in sorted array.
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
        cout<<arr.A[i];
}

// void InsertSort(struct Array *arr, int x)
// {
//     int i=arr->length-1;
//     if(arr->length==arr->size)
//         return;
//     while(i>=0 && arr->A[i]>x) 
//     {
//         arr->A[i+1]=arr->A[i];
//         i--;
//     }   
//     arr->A[i+1]=x;
//     arr->length++;
// }

void InsertSort(struct Array *arr, int x)
{
    int i=arr->length-1;
    if(arr->length==arr->size)
        return;
    while(x>=0 && arr->A[i]>x)
    {
        arr->A[i+1]=arr->A[i];
        i--;
    }
    arr->A[i+1]=x;
    arr->length++;
}

int main()
{
    struct Array arr={{1,2,3,4,5},10,5};
    InsertSort(&arr,20);
    Display(arr);
    return 0;
}
