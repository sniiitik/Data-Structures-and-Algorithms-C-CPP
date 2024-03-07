// Header Files and namespaces
// #include<bits/stdc++.h>
//Get Set Min Max Sum Avg
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
        cout<<arr.A[i]<<' ';
}
int Get(struct Array arr, int index)
{
    if(index>=0 && index<arr.length)
        return arr.A[index];
    return -1;
}

void Set(struct Array *arr, int index, int x)
{
    if(index>=0 && index<arr->length)
        arr->A[index]=x;  
}

int Max(struct Array arr)
{
    int max = arr.A[0];
    int i;
    for(i=1;i<arr.length;i++)
    {
        if(arr.A[i]>max)
            max = arr.A[i];
    }
    return max;
}

int Min(struct Array arr)
{
    int min = arr.A[0];
    int i;
    for(i=1;i<arr.length;i++)
    {
        if(arr.A[i]<min)
            min = arr.A[i];
    }
    return min;
}

int Sum(struct Array arr)
{
    int i;
    int s=0;
    for(i=0;i<arr.length;i++)
        s+=arr.A[i];
    return s;
}

float Avg(struct Array arr)
{
    return (float)Sum(arr)/arr.length;
}

int main()
{
    struct Array arr={{1,2,16,4,5},10,5};

    cout<<Get(arr,9)<<endl;
    Set(&arr,2,20);
    cout<<Max(arr)<<endl;
    // cout<<Min(arr)<<endl;
    // cout<<Sum(arr)<<endl;
    // cout<<Avg(arr)<<endl;
    Display(arr);
    return 0;
}