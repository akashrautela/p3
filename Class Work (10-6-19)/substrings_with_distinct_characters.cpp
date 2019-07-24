#include<iostream>
#include<string.h>
using namespace std;
int check_distinct(char s[])
{
    int i,j,len=strlen(s);
    int f=1;
    for(i=0;i<len;i++)
    {
        for(j=0;j<i;j++)
        {
            if(s[i]==s[j])
            {
                f=0;
                break;
            }
        }
    }
    if(f) return 1;
    else return 0;
}
int main()
{
    char str[30],d[30];
    cin>>str;
    int index;
    int i,j,k,len=strlen(str);
    for(i=0;i<len;i++)
    {
        for(j=0;j<len-i+1;j++)
        {
            index=0;
            for(k=i;k<i+j;k++)
            {
                d[index++]=str[k];
            }
            d[index]='\0';
            if(check_distinct(d)==1) cout<<d<<endl;
        }
    }
    return 0;
}
