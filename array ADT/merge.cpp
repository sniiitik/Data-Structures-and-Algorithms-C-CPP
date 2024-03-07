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
        cout<<arr.A[i]<<' ';
}

// struct Array* Merge(struct Array *arr1, struct Array *arr2)
// {
    // int i,j,k;
    // i=j=k=0;
    // struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));

    // while(i<arr1->length && j<arr2->length)
    // {
    //     if(arr1->A[i]<arr2->A[j])
    //         arr3->A[k++]=arr1->A[i++];
    //     else
    //         arr3->A[k++]=arr2->A[j++];
    // }
    // for(;i<arr1->length;i++)
    //     arr3->A[k++]=arr1->A[i];
    // for(;j<arr2->length;j++)
    //     arr3->A[k++]=arr2->A[j];

    // arr3->length=arr1->length+arr2->length;
    // arr3->size=10;

    // return arr3;
// }
// struct Array* Merge(struct Array *arr1, struct Array *arr2)
// {
//     int i,j,k;
//     i=j=k=10;
//     struct Array *arr3=(struct Array *)malloc(sizeof(struct Array));

//     while(i<arr1->length && j<arr2->length)
//     {
//         if(arr1->A[i]<arr2->A[j])
//             arr3->A[k++]=arr1->A[i++];
//         else
//             arr3->A[k++]=arr2->A[j++];
//     }
//     for(;i<arr1->length;i++)
//         arr3->A[k++]=arr1->A[i];
//     for(;j<arr2->length;k++)
//         arr3->A[k++]=arr1->A[j];

//     arr3->length=arr1->length+arr2->length;
//     arr3->size=10;

//     return arr3;
// }
struct Array* Merge(struct Array *arr1, struct Array *arr2)
{
    int i,j,k;
    i=j=k=0;
    struct Array *arr3=(struct Array *)malloc(sizeof(struct Array));

    while(i<arr1->length && j<arr2->length)
    {
        if(arr1->A[i]<arr2->A[j])
            arr3->A[k++]=arr1->A[i++];
        else
            arr3->A[k++]=arr2->A[j++];
    }
    for(;i<arr1->length;i++)
        arr3->A[k++]=arr1->A[i];
    
    for(;j<arr1->length;j++)
        arr3->A[k++]=arr1->A[j];
    
    arr3->length=arr1->length+arr2->length;
    arr3->size=10;

    return arr3;

}

int main()
{
    // struct Array arr1={{2,6,10,15,25},10,5};
    // struct Array arr2={{3,4,7,18,20},10,5};
    // struct Array *arr3;
    // arr3 = Merge(&arr1,&arr2);

    // Display(*arr3);

    struct Array arr1={{2,6,10,23,16},10,5};
    struct Array arr2={{1,3,9,29,14},10,5};
    struct Array *arr3;
    arr3= Merge(&arr1,&arr2);

    Display(*arr3);
    return 0;
}