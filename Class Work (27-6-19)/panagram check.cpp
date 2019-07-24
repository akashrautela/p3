#include<bits/stdc++.h>
using namespace std;
int main()
{
    //string str;
    char str[100];
    gets(str);
    int count[26] = {0};
    int i, len = strlen(str);
    for(i=0; i<len; i++)
        count[str[i]-'a']++;
    for(i=0;i<26;i++)
    {
        if(count[i] == 0)
        {
            cout<<"Not a  panagram!!!";
            return 0;
        }
    }
    cout<<"Panagram";
    return 0;
}
