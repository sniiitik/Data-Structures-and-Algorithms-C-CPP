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

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void Display(struct Array arr)
{
    int i;
    for(i=0;i<arr.length;i++)
        cout<<arr.A[i];
}

// void ReArrange(struct Array *arr)
// {
//     int i,j;
//     i = 0;
//     j = arr->length-1;

//     while(i<j)
//     {
//         while(arr->A[i]<0)i++;
//         while(arr->A[j]>=0)j--;
//         if(i<j)
//             {
//                 swap(&arr->A[i],&arr->A[j]);
//             }
//     }
// }
void NegPos(struct Array *arr)
{
    int i,j;
    i=0;
    j=arr->length-1;

    while(i<j)
    {
        while(arr->A[i]<0)i++;
        while(arr->A[j]>=0)j--;
        if(i<j)swap(&arr->A[i],&arr->A[j]);
    }
}
int main()
{
    struct Array arr = {{1,-2,3,-5,6,8},10,6};
    // ReArrange(&arr);
    NegPos(&arr);
    Display(arr);
    return 0;
}

