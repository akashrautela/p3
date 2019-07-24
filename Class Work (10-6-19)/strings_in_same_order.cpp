#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
void remove_dup(char s[],char t[])
{
    int i,len=strlen(s),k=1;
    t[0]=s[0];
    for(i=1;i<len;i++)
    {
        if(s[i] != s[i-1])
        {
            t[k]=s[i];
            k++;
        }
    }
    t[k]='\0';
}
int main()
{
    char s1[30],s2[30];
    char t1[30]={0}, t2[30]={0};
    gets(s1);
    gets(s2);
    remove_dup(s1,t1);
    remove_dup(s2,t2);
    if(strcmp(t1,t2) == 0) cout<<"YES";
    else cout<<"NO";
    return 0;
}
