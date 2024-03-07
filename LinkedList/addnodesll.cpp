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
struct Node
{
    int data;
    struct Node *next;

}*first = NULL;

void create(int arr[], int n)
{
    int i;
    struct Node *t, *last;
    first = new Node;
    first -> data = arr[0];
    first -> next = NULL;
    last = first;

    for(i=1;i<n;i++)
    {
        t = new Node;
        t -> data = arr[i];
        t -> next = NULL;
        last -> next = t;
        last = t;
    }
}

void display(struct Node *p)
{
    while(p!= NULL)
    {
        cout<<p->data;
        p = p-> next;
    }
}

int sum(struct Node *p)
{
    int add = 0;
    while(p!= NULL)
    {
        add = add + p->data;
        p = p->next;
    }
    return add;
}
int main()
{
    int arr[]={3,2,4,1,5};
    create(arr,5);
    display(first);
    cout<<"The sum is "<<sum(first);
    return 0;
}