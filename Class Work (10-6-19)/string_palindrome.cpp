#include<iostream>
#include<string.h>
using namespace std;
int palindrome(char *s)
{
    int i,j,f=1,len = strlen(s);
    for(i=0,j=len-1;i<len/2;i++,j--)
    {
        if(s[i]!=s[j])
        {
            f=0;
            break;
        }
    }
    if(f) return 1;
    else -1;
}
int main()
{
    char str[30];
    cin>>str;
    cout<<palindrome(str);
    return 0;
}
