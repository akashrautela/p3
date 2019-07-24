#include<bits/stdc++.h>
#include<string.h>
using namespace std;
void permute(char a[] , int l ,int r)
{
    if(l == r)
    {
        cout<<a<<endl;
        return ;
    }
    for(int i=l;i<r;i++)
    {
        swap(a[l],a[i]);
        permute(a,l+1,r);
        swap(a[l],a[i]);
    }
}
int main()
{
    char str[] = "abc";
    int len = strlen(str);
    permute(str , 0,len);
}
