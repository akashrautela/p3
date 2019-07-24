#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int i,j,len=str.length();
    for(j=1;j<=len;j++)
    {
        for(i=0 ; i+j <= len ; i++) cout<<str.substr(i,j)<<" ";
        cout<<endl;
    }
    return 0;
}
