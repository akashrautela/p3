#include<iostream>
#include<string.h>
using namespace std;

int check(char *s, int b, int e)
{
    if(b>=e) return 1;

    if(s[b] != s[e]) return 0;

    check(s,b+1,e-1);
}

int main()
{
    char str[50];
    cin>>str;
    cout<<check(str,0,strlen(str)-1);
    return 0;
}
