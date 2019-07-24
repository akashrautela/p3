#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int i,j;
    int len = str.length();
    for(i=0;i<len;i++)
    {
        for(j=1;j<=len-i;j++) cout<<str.substr(i,j)<<" ";
        cout<<endl;
    }
    return 0;
}
