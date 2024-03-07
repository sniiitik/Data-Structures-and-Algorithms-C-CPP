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
struct Node 
{
    int data;
    struct Node *next;
}*first = NULL;

void create(int A[],int n)
{
    int i;
    struct Node *t, *last;
    first = new Node;
    first -> data = A[0];
    first -> next = last;
    last = first;
    
    for(i=1;i<n;i++)
    {
        t = new Node;
        t -> data = A[i];
        t -> next = NULL;
        last -> next = t;
        last = t;
    }
}

void display(struct Node *p)
{
    while (p!=NULL)
    {
        cout<<p->data;
        p=p->next;
    }
}
// void recursiveDisplay(struct Node*p)
// {

//     if(p!=NULL)
//     {
//         recursiveDisplay(p->next);
//         cout<<p->data;
       
//     }
// }

int cnt(struct Node*p)
{
    int c = 0;
    while(p!=0)
    {
        c++;
        p = p->next;
    }
    return c;
}
int Delete(struct Node *p, int pos)
{
    struct Node *q;
    int x = -1,i;

    if(pos<1 || pos > cnt(p))
        return -1;
    if(pos == 1)
    {
        q = first;
        x = first->data;
        first = first->next;
        delete(q);
        return x;
    }
    else
    {
        for(i=0;i<pos-1;i++)
        {
            q = p;
            p = p->next;
        }
        q ->next = p ->next;
        x = p->data;
        delete(p);
        return x;

    }
}

int main()
{
    int A[]={2,4,1,6,8};
    create(A,5);
    // recursiveDisplay(first);
    Delete(first,4);
    display(first);

    return 0;
}