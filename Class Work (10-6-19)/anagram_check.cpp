#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    char s1[30],s2[30];
    cin>>s1>>s2;
    int l1 = strlen(s1);
    int l2=strlen(s2);
    if(l1==l2)
    {
        sort(s1,s1+l1);
        sort(s2,s2+l2);
        if(strcmp(s1,s2)==0) cout<<"ANAGRAM";
        else cout<<"NOT anagram";
    }
    else cout<<"NOT anagram";
    return 0;
}
