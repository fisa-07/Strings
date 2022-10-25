// Reverse an string
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char s[10];
    cin>>s;
    int length=strlen(s);
    char r[10];
    int j;
    for(int i=length,j=0;i>=0;i--,j++)
    {
        r[j]=s[i];
    }
    for(int i=0;i<=length;i++)
    {
        cout<<r[i];
    }
    return 0;

}