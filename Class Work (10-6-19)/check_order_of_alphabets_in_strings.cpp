#include<iostream>
#include<string.h>
using namespace std;
char* remove_duplicate(char *s,int l)
{
    int i,j,k=0;
    char str[l]="";
    for(i=0;i<l;i++)
    {
        int f=1;
        for(j=0;j<i;j++)
        {
            if(s[i] == s[j])
            {
                f=0;
                break;
            }
        }
        if(f) str[k++]=s[i];
    }
    str[k]='\0';
    return str;
}
int main()
{
    char str1[30],str2[30];
    cin>>str1>>str2;
    int l1=strlen(str1), l2=strlen(str2);
    char *s1,*s2;
    s1 = remove_duplicate(str1,l1);
    s2 = remove_duplicate(str2,l2);
    if(strcmp(s1,s2) == 0) cout<<"YES";
    else cout<<"NO";
    return 0;
}
