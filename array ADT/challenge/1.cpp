// Header Files and namespaces
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Code Shortners
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define len(s) (int)s.size()
#define print(x) cout << x << '\n'
#define endl '\n'
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

ll mod = 1000000007;

// Code
//  struct Array
//  {
//      int *A;
//      int size;
//      int length;
//  };
//  void Display(struct Array arr)
//  {
//      int i;
//      cout<<"The elements are:"<<endl;
//      for(i=0;i<arr.length;i++)
//          cout<<arr.A[i]<<" ";
//  }
//  int MissNum(struct Array arr)
//  {
//      int sum=0;
//      int i,s,n;
//      n=arr.length;
//      for(i=0;i<arr.length;i++)
//      {
//          sum = sum+arr.A[i];
//      }
//      s=n*(n+1)/2;
//      s-sum;

// }

// int main()
// {
//     struct Array arr;
//     int n,i;
//     cout<<"enter the size of array"<<endl;
//     cin>>arr.size;
//     arr.A = (int *)malloc(arr.size*sizeof(int));
//     arr.length=0;
//     cout<<"Enter number of numbers"<<endl;
//     cin>>n;
//     for(i=0;i<n;i++)
//         cin>>arr.A[i];
//     arr.length=n;

//     Display(arr);
//     return 0;
// }

struct Array
{
    int A[9];
    int size;
    int length;
};
void Display(struct Array arr)
{
    int i;
    for (i = 0; i < arr.length; i++)
        cout << arr.A[i] << " ";
}
// for 1st N natural Numbers
int MissNum(struct Array arr, int n)
{
    int sum = 0;
    int i;
    int s;
    int miss;
    // int length=arr.length;
    for (i = 0; i < arr.length; i++)
        sum = sum + arr.A[i];
    s = n * (n + 1) / 2;
    // cout<<"The sum is:"<<sum<<endl;
    miss = s - sum;
    return miss;
}

// not for 1st N natural numbers.
void Miss(struct Array arr, int n)
{
    int l = arr.A[0];
    int diff = l - 0;
    int h = arr.length;
    int i;
    // n = arr.length - 1;
    for (i = 0; i < n; i++)
    {
        if (arr.A[i] - i != diff)
        {
            cout << "Missing element is:" << diff + i;
            break;
        }
    }
    return;
}

// Multiple Elements missing
void Multiple(struct Array arr, int n)
{
    int l = arr.A[0];
    int diff = l - 0;
    // int h = arr.length;
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr.A[i] - i != diff)
        {
            while(diff<arr.A[i]-i)
            {
                cout << "Missing elements are:" << diff + i<<endl;
                diff++;
            }
        }
    }

    return;
}

int main()
{
    struct Array arr = {{6, 7, 9, 12, 13, 14, 15, 16, 17}, 10, 9};
    // cout<<"The Missing element is:"<<MissNum(arr,12)<<endl;
    // Display(arr);
    // Miss(arr, 9);
    Multiple(arr,9);
}