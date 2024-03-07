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
class Array
{
    private:
        int *A;
        int size;
        int length;
        void swap(int *x, int *y);//this is local fun and only useful within a class and is usefull for other functions so we made it private.
    public:
        Array()//Non-parameterized constructor
        {
            size = 10;//size we have set it to 10.
            length=0;//intially the lenght is 0 coz there are no elements.
            A=new int[size];//we created an array dynamically
        }
        Array(int sz)//parameterized constructor
        {
            size = sz;
            length=0;
            A=new int[size];
        }
        ~Array()//we are using dynamic memory so we shoud use a desctrtor as well
        {
            delete []A;//as it's an array we used subscript operator[]
        }

        //NOW ALL THE FUNCTIONS SHOULD BE WRITTEN INSIDE THE CLASS.
        void Display();
        void Append(int x);
        void Insert(int index, int x);
        int Delete(int index);
        int LinearSearch(int key);
        int BinarySearch(int key);
        int Get(int index);
        void Set(int index, int x);
        int Max();
        int Min();
        int Sum();
        float Avg();
        void Reverse();
        void Reverse2();
        void InsertSort();
        int IsSorted();
        void Rearrange();
        Array* Merge(Array *arr2);
        Array* Union(Array *arr2);
        Array* Intersection(Array *arr2);
        Array* Difference(Array *arr2);
    //These all are now members of a class so they can directly access the Array "*A";
};
//Now outside th class we should implement all these functions
//For implementing all these functions we should write dowm the class name and scope resoultion operator.
void Array::Display()
{
    int i;
    cout<<"The Elements are:"<<endl;
    for(i=0;i<length;i++)
        cout<<A[i]<<' ';
}

void Array::Append(int x)
{
    if(length<size)
        A[length++]=x;
}

void Array:: Insert(int index, int x)
{
    int i;
    if(index>=0 && index<=length)
        for(i=length-1;i>index;i--)
            A[i]=A[i-1];
        A[index]=x;
        length++;
}

int Array::Delete(int index)
{
    int i;
    int x = 0;
    x= A[index];
    if(index>=0 && index<length)
        for(i=index;i<length-1;i++)
            A[i]=A[i+1];
        length--;
        return x;
}
int Array:: LinearSearch(int key)
{
    int i;
    for(i=0;i<length;i++)
       {
            if(A[i]==key)
                return i;
       }
        return -1;
}
int Array:: BinarySearch(int key)
{
    int l,mid,h;
    l=0;
    h=length-1;

    while(l<=h)
    {
        mid = (l+h)/2;
        if(key==A[mid])
            return mid;
        else if(key<A[mid])
            h=mid-1;
        else
            l = mid+1;
    }
    return -1;
}
int Array:: Get(int index)
{
    if(index>=0 && index<=length)
        return A[index];
    return -1;
}
void Array:: Set(int index, int x)
{
    if(index>=0 && index<length)
        A[index]=x;
}
int Array:: Max()
{
    int max=A[0];
    int i;
    for(i=0;i<length;i++)
    {    
        if(A[i]>max)
            max = A[i];
    }
    return max;
}

int Array:: Min()
{
    int min = A[0];
    int i;
    for(i=0;i<length;i++)
    {
        if(A[i]<min)
            min = A[i];
    }
    return min;
}

int Array::Sum()
{
    int total=0;
    int i;
    for(i=0;i<length;i++)
        total+=A[i];
    return total;
}

float Array::Avg()
{
    return (float)Sum()/length;
}

// void Array::Reverse()
// {
//     int i,j;
//     int *B;
//     Array *B=new Array();
//     for(i=length-1,j=0;i>=0;i--,j++)
//         B[j]=A[i];
//     for(i=0;i>length;i++)
//         A[i]=B[i];
// }

// void Array:: Reverse2()
// {
//     int i,j;
//     for(i=0,j=length;i<j;i++,j--)
//         swap(&A[i],&A[j]);
// }

int main()
{
    Array arr(10);

    arr.Insert(0,5);
    arr.Insert(1,6);
    arr.Insert(2,9);
    arr.Display();
    cout<<endl;
    cout<<arr.Delete(0)<<endl;
    arr.Display();
    return 0;
}