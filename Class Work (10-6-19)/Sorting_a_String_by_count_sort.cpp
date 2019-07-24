#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str[30];
    cin>>str;
    int len=strlen(str);
    char b[len];
    int count[26]={0};
    int i,index;
    for(i=0;i<len;i++)
    {
        index=str[i]-'a';
        count[index]++;
    }
    for(i=1;i<=25;i++)
    {
        count[i] += count[i-1];
    }

    for(i=len-1;i>=0;i--)
    {
        index = (count[str[i]-'a']--)-1;
        b[index] = str[i];
    }
    for(i=0;i<len;i++) cout<<b[i]<<" ";
    return 0;
}
