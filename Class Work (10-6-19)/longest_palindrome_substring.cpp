#include<iostream>
#include<string.h>
int palindrome(char str[])
{
    int i,j,f=1,len=strlen(str);
    for(i=0,j=len-1;i<len/2;i++,j--)
    {
        if(str[i]!=str[j])
        {
            f=0;
            break;
        }
    }
    if(f) return 1;
    else return 0;
}
using namespace std;
int main()
{
    char str[30],tmp[30], maxtmp[30];
    cin>>str;
    int tmplen=0, maxtmplen=0;
    int index,i,j,k,len=strlen(str);
    for(i=0;i<len;i++) // starting index
    {
        for(j=0;j<len-i+1;j++) // ending index
        {
            index=0;
            for(k=i;k<i+j;k++)//strings present between i & j index
            {
                tmp[index++]=str[k];
            }
            tmp[index]='\0';
            tmplen=strlen(tmp);
            if(maxtmplen<tmplen && palindrome(tmp) == 1)
            {
                maxtmplen=tmplen;
                strcpy(maxtmp,tmp);
            }
        }
    }
    cout<<maxtmp;
    return 0;
}
