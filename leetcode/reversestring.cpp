#include <iostream>
using namespace std;
void Reverse(char *s)
{
    int i, j;
    char t;
    for (j = 0; s[j] != '\0'; j++)
    {
    }
    j = j - 1;
    for (i = 0; i < j; i++)
    {
        t = s[i];
        s[i] = s[j];
        s[j] = t;
    
    }
}
int main()
{
    char str[] = "Hello";
    Reverse(str);
    cout <<str;
    return 0;
}