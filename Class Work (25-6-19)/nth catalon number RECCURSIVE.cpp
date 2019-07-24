#include<bits/stdc++.h>
using namespace std;
int c(int n)
{
    if(n == 0 ||n == 1) return 1;

    int temp=0;
    for(int i=0;i<n;i++)
        temp += c(i)*c(n-i-1);
    return temp;
}
int main()
{
    int n = 5;
    cout<<c(n);
    return 0;
}
