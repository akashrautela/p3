#include<bits/stdc++.h>
using namespace std;
/*void reverse1(string str,int b ,int e)
{
    if(b>=e) return;
    char tmp = str[b];
    str[b] =str[e];
    str[e] = tmp;
    reverse1(str,b+1,e-1);
}*/
int main()
{
    string str = "aba";
    string tmp = "";
    int i, j, len = str.length();
    int f=1;
    for(i=0;i<=len;i++)
    {
        for(j=1;j<=len-i;j++)
        {
            tmp = str.substr(i,j);
            //reverse1(tmp,0,tmp.length()-1);
            reverse(tmp.begin() , tmp.end());
            if(str.find(tmp) == -1)
            {
                f=0;
                break;
            }
        }
    }
    if(f) cout<<"YES";
    else cout<<"NO";
    return 0;
}
