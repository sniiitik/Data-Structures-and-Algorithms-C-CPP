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
    cout<<"The elements are:"<<endl;
    for(i=0;i<arr.length;i++)
        cout<<arr.A[i];
}

int Delete(struct Array *arr, int index)
{
    int x = 0;
    int i;
    if(index>=0 && index <= arr->length-1)
    {
        x = arr->A[index];
        for(i=index;i<arr->length;i++)
            arr->A[i]=arr->A[i+1];
        arr->length--;
        return x;
    }
    return 0;
}

int main()
{
    struct Array arr = {{1,2,3,4,5},10,5};
    cout<<Delete(&arr,3);
    Display(arr);
    return 0;
}






// int Delete(struct Array *arr, int index)
// {
//     int x=0;
//     int i;
//     if(index >=0 && index<=arr->length-1)
//         {
//             x = arr->A[index];
//             for(i=index;i<arr->length-1;i++)
//                 arr->A[i]=arr->A[i+1];
//             arr->length--;
//             return x;
//         }
//         return 0;
// }



