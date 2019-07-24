#include<bits/stdc++.h>
using namespace std;

#define MAX_SIZE 100
void f(int pos, int n, int open, int close)
{
    static char str[MAX_SIZE];
    if(close == n)
    {
        str[pos]=0;
        cout<<str<<endl;
        return ;
    }
    if(open>close)
    {
        str[pos]='}';
        f(pos+1, n, open, close+1);
    }
    if(open<n)
    {
        str[pos]='{';
        f(pos+1, n, open+1, close);
    }
}
int main()
{
    int n;
    cin>>n;
    f(0,n,0,0);
    return 0;
}
