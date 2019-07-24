#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str, rev;
    getline(cin, str);
    rev = str;
    reverse(rev.begin(), rev.end());
    if(str == rev)
    {
        cout<<"Longest suffix which is also a prefix is : "<<str;
        return 0;
    }
    int len = str.length();
    int fh = len/2 - 1, sh = len/2 +1;
    if(len%2 == 0)
    {
        fh = len/2 -1;
        sh = len/2;
    }
    while(fh>=0 && sh<len)
    {
        string first = str.substr(0, fh+1);
        string second = str.substr(sh , len - sh );
        if(first.find(second) == 0)
        {
            cout<<"Longest suffix which is also a prefix is : "<<str.substr(0, fh+1);
            return 0;
        }
        fh--;
        sh++;
    }
    cout<<"No suffix which is equal to prefix found!!";
    return 0;
}
