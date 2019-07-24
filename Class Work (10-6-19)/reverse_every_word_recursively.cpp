#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
void reverse_word(char str[],int b,int e)
{
    if(b>=e) return;
    char tmp=str[b];
    str[b]=str[e];
    str[e]=tmp;
    reverse_word(str,b+1,e-1);
}
int main()
{
    char str[50];
    int i,j,len,b=0,e;
    gets(str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]==' ' && (str[i+1]!=' ' || str[i+1]=='\0'))
        {
            e=i-1;
            reverse_word(str,b,e);
            b=i+1;
        }
        else if(str[i+1]=='\0')
        {
            e=i;
            reverse_word(str,b,e);
        }
    }
    puts(str);
    return 0;
}
