#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str , tmp;
    int k,i,j;
    cout<<"Enter a string : ";
    cin>>str;
    int len = str.length();
    cout<<"Enter value of K : ";
    cin>>k;
    cout<<"Substring(s) of "<<k<<" length are : ";
    for(i=0;i<len;i++)
    {
        for(j=1;j<=len-i;j++)
        {
            tmp = str.substr(i,j);
            if(tmp.length() == k)
            {
                string tmp_rev = tmp;
                reverse(tmp_rev.begin() , tmp_rev.end());
                if(tmp == tmp_rev) cout<<tmp<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
