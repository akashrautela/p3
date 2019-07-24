#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[100];
    gets(str);
    int i, len=strlen(str);
    int count[26]={0};
    for(i=0;i<len;i++)
        count[str[i]-'a']++;

    cout<<"Missing Letters are : ";
    for(i=0;i<26;i++)
        if(count[i] == 0)
            cout<<(char)('a'+i)<<" ";

    return 0;
}
