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
int main()
{
    char S[] = "Hello How are youn";
    int i;
    int vcnt = 0,ccnt=0;
    for (i = 0; S[i] != '\0'; i++)
    {
        if (S[i] == 'A' || S[i] == 'E' || S[i] == 'I' || S[i] == 'O' || S[i] == 'U' || S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u')
        {
            vcnt++;
        }
        else if((S[i]>=65 && S[i]<=90)||(S[i]>=97 && S[i]<=122))
            ccnt++;
    }
    cout <<"The vowels are:"<<vcnt;
    cout <<"The consonants are:"<<ccnt;
    return 0;
}