#include<bits/stdc++.h>
using namespace std;
int ispalindrome(string str)
{
    int i,j, len = str.length();
    int f =1;
    for(i=0 , j=len-1 ; i<len/2 ; i++,j--)
    {
        if(str[i] != str[j])
        {
            f=0;
            break;
        }
    }
    if(f) return 1;
    else return 0;
}
int main()
{
    string str , tmp;
    cin>>str;
    int i,j,len = str.length();

    for(i=0;i<len;i++)
    {
        for(j=1;j<=len-i;j++)
        {
            tmp =str.substr(i,j);
            int f = ispalindrome(tmp);
            if(f) cout<<tmp<<" ";
        }
        cout<<endl;
    }
    return 0;
}
