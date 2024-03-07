// Header Files and namespaces
// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;

// //Code Shortners
// typedef long long ll;
// typedef vector<int> vi;
// typedef pair<int,int> pi;
// #define F first
// #define S second
// #define PB push_back
// #define MP make_pair
// #define len(s) (int)s.size()
// #define print(x) cout<<x<<'\n'
// #define endl '\n'
// #define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


// ll mod = 1000000007;

// //Code
// struct Array
// {
//     int *A;
//     int size;
//     int length;
// };
 
// void Display(struct Array arr)
// {
//     int i;
//     cout<<"The elements are:"<<endl;
//     for(i=0;i<arr.length;i++)
//         cout<<arr.A[i];
// }

// int main()
// {
//     struct Array arr;
//     int n, i;

//     cout<<"Enter size of array"<<endl;
//     cin>>arr.size;
//     arr.A=(int *) malloc (arr.size*sizeof(int));
//     arr.length=0;
//     cout<<"Enter the number of numbers"<<endl;
//     cin>>n;

//     cout<<"Enter all the elements"<<endl;
//     for(i=0;i<n;i++)
//         cin>>arr.A[i];
//     arr.length=n;

//     Display(arr);
//     return 0;
// }

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
struct Array
{
    int *A;
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
int main()
{
    struct Array arr;
    int n,i;

    cout<<"Enter size of array:"<<endl;
    cin>>arr.size;

    arr.A=(int *)malloc(arr.size*sizeof(int));
    arr.length=0;
    cout<<"Enter the number of numbers"<<endl;
    cin>>n;

    cout<<"Enter the elements:"<<endl;
    for(i=0;i<n;i++)
        cin>>arr.A[i];
    arr.length=n;

    Display(arr);
    return 0;
}
// Header Files and namespaces
// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;

// //Code Shortners
// typedef long long ll;
// typedef vector<int> vi;
// typedef pair<int,int> pi;
// #define F first
// #define S second
// #define PB push_back
// #define MP make_pair
// #define len(s) (int)s.size()
// #define print(x) cout<<x<<'\n'
// #define endl '\n'
// #define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

// ll mod = 1000000007;

// //Code
// struct Array
// {
//     int *A;
//     int size;
//     int length;
// };

// void Display(struct Array arr)
// {
//     int i;
//     for(i=0;i<arr.length;i++)
//         cout<<arr.A[i];
// }

// int main()
// {
//     struct Array arr;
//     int n,i;
//     cout<<"Enter the size of array"<<endl;
//     cin>>arr.size;
//     arr.A=(int *) malloc(arr.size*sizeof(int));
//     arr.length=0;
//     cout<<"Enter number of numbers"<<endl;
//     cin>>n;
//     cout<<"Enter the elements"<<endl;
//     for(i=0;i<n;i++)
//         cin>>arr.A[i];
//     arr.length=n;

//     Display(arr);
//     return 0;
// }
// Header Files and namespaces
// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;

// //Code Shortners
// typedef long long ll;
// typedef vector<int> vi;
// typedef pair<int,int> pi;
// #define F first
// #define S second
// #define PB push_back
// #define MP make_pair
// #define len(s) (int)s.size()
// #define print(x) cout<<x<<'\n'
// #define endl '\n'
// #define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

// ll mod = 1000000007;

// //Code
// struct Array
// {
//     int A[10];
//     int size;
//     int length;
// };

// void Display(struct Array arr)
// {
//     int i;
//     cout<<"The elements are:"<<endl;
//     for(i=0;i<arr.length;i++)
//         cout<<arr.A[i]<<' ';
// }
// int main()
// {
//     struct Array arr={{2,5,4,1,6,7},10,6};
//     Display(arr);
//     return 0;
// }