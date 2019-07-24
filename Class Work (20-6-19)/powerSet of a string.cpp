#include<bits/stdc++.h>
#include<string.h>
#define MAX 100
using namespace std;
void append(char s[], char c)
{
    int l = strlen(s);
    s[l]=c;
    s[l+1]='\0';
}
void powerset(char *str, int pos, int len, char *outs)
{
    if(pos == len)
    {
        outs[pos]='\0';
        cout<<outs<<endl;
        return ;
    }
    powerset(str,pos+1, len, outs);
    append(outs, str[pos]);
    powerset(str,pos+1, len, outs);
}
int main()
{
    char str[] = "ab";
    int len = strlen(str);
    char outs[MAX] = "";
    powerset(str , 0, len,outs);
    return 0;
}
