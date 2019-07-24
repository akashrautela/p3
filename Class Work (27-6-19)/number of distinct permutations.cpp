#include<bits/stdc++.h>
using namespace std;
double fact(int len)
{
    if(len == 1 || len == 0) return 1;

    return len*fact(len-1);
}
int main()
{
    string str;
    getline(cin,str);
    int count[26]={0};
    int i, len = str.length();

    for(i=0;i<len;i++) count[str[i]-'a']++;

    long long permutation = fact(len);
    for(i=0;i<26;i++)
    {
        if(count[i] > 1 )
            permutation = permutation/fact(count[i]);
    }
    cout<<permutation;
    return 0;
}
