#include<iostream>
#include<string.h>
using namespace std;
int strstr1(char s1[],char s2[])
{
    int i,j,l1=strlen(s1),l2=strlen(s2);
    int f=1;
    for(i=0;i<l1;i++)
    {
        int idxi=i;
        int idxj=0;
        while(idxi<l1 && idxj<l2 && s1[idxi] == s2[idxj])
        {
            idxi++;
            idxj++;
        }
        if(idxj == l2)
        {
            f=0;
            return i;
        }
    }
    if(f) return -1;
}
int main()
{
    char s1[30],s2[30];
    cin>>s1>>s2;
    cout<<strstr1(s1,s2);
    return 0;
}
