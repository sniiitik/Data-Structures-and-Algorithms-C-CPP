//Rol major
#include<iostream>
using namespace std;
class UpperTri
{
    private:
        int n;
        int *A;
    public:
        UpperTri()
        {
            n=2;
            A=new int[2*(2+1)/2];
        }
        UpperTri(int n)
        {
            this->n=n;
            A=new int[n*(n+1)/2];
        }
        ~UpperTri()
        {
            delete []A;
        }
        void Set(int i,int j,int x);
        int Get(int i,int j);
        void Display();
};
void UpperTri::Set(int i,int j,int x)
{
    if(i<=j)
        A[j*(j-1)/2+(i-1)]=x;
}
int UpperTri::Get(int i, int j)
{
    if(i<=j)
        return A[j*(j-1)/2+(i-1)];
    return 0;
}
void UpperTri::Display()
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i<=j)
                cout<<A[j*(j-1)/2+(i-1)]<<" ";
            else
                cout<<"0 ";
        }
        cout<<endl;
    }
}
int main()
{
    int d;
    cout<<"Enter Dimensions"<<endl;
    cin>>d;
    UpperTri lm(d);

    int x;
    cout<<"Enter the elements"<<endl;
    for(int i=1;i<=d;i++)
    {
        for(int j=1;j<=d;j++)
        {
            cin>>x;
            lm.Set(i,j,x);
        }
    }
    cout<<endl;
    lm.Display();

    return 0;
}


