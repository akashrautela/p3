#include<iostream>
#include<string.h>
using namespace std;
int check_distinct(char s[])
{
    int i,j,f=1,len=strlen(s);
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
    char str[40],tmp[40]={0}, maxtmp[40]={0};
    cin>>str;
    int maxtmplen=0,tmplen=0, index;
    int i,j,k,len=strlen(str);
    for(i=0;i<len;i++)
    {
        for(j=0;j<len-i+1;j++)
        {
            index=0;
            for(k=i;k<i+j;k++)
                tmp[index++] = str[k];
            tmp[index]='\0';
            tmplen=strlen(tmp);
            if(maxtmplen<tmplen && check_distinct(tmp)==1)
            {
                maxtmplen=tmplen;
                strcpy( maxtmp, tmp);
            }
        }
    }
    cout<<maxtmp;
    return 0;
}
