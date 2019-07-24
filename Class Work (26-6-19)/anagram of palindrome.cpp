#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int i,j, len = str.length();
    int freq[26] = {0};
    int f;
    for(i=0;i<len;i++)
    {
        f = 1;
        for(j=0;j<i;j++)
        {
            if(str[i] == str[j])
            {
                f=0;
                break;
            }
        }
        if(f)
        {
            freq[str[i]-'a']++;
            for(j=i+1;j<len;j++)
                if(str[i] == str[j])  freq[str[i]-'a']++;
        }
    }
    int oc = 0;
    f = 1;
    for(i=0;i<26;i++)
    {
        if(freq[i]%2 != 0) oc++;
        if(oc >1)
        {
            f=0;
            break;
        }
    }
    if(f) cout<<"YES";
    else cout<<"NO";
    return 0;
}
