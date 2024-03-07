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
struct Array
{
    int A[100];
    int size;
    int length;
};
// void MissUnsort(struct Array arr, int n)
// {
//     int i;
//     int diff = 0;
//     int l = arr.A[0];
//     int h = arr.length;
//     diff = l - 0;
//     Array *H=new Array;
//     for(i=0;i<n;i++)
//     {
//          H[A[i]++];
//     }
// }
void Hash_Table_Technique(struct Array arr, int n)
    {
        int i;
        int length;
        int* H = new int[length];
        int low = 1;
        int high = 19;
        for(i=0;i<n;i++)
        {
            int H[arr.A[i]++];//hash table
        }
        for(i=low;i<=high;i++)
        {
            if(H[i]==0)
            {
                cout<<i<<" ";
            }
        }
    }
int main()
{
    struct Array arr = {{2, 6, 1, 4, 5, 19}, 100, 20};
    Hash_Table_Technique(arr,19);
    return 0;
}