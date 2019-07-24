#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int i,j,len = str.length(), c=0;
    for(i=0;i<len;i++)
    {
        for(j=1;j<=len-i;j++)
        {
            string tmp = str.substr(i,j);
            if(str.find(tmp) == i){
                    c++;
                    cout<<tmp<<" ";
            }
        }
    }
    cout<<c;
    return 0;
}
