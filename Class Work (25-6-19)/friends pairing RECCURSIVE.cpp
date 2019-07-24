#include<bits/stdc++.h>
using namespace std;
int fpair(int n)
{
    if(n <= 0) return 0;
    if(n == 1) return 1;
    if(n == 2) return 2;
    return fpair(n-1) + (n-1)*fpair(n-2);
}
int main()
{
    int n = 3;
    cout<<fpair(n);
    return 0;
}
