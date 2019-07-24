#include<bits/stdc++.h>
using namespace std;
int subset(int sum , int s[] ,int n)
{
    if(n == 0) return 0;
    if(sum == 0) return 1;
    return subset(sum - s[n] , s, n-1) + subset(sum , s, n-1);
}
int main()
{
    int s[] = {4,7,15,25,42};
    int sum = 51 , n =5;
    cout<<subset(sum,s,n);
    return 0;
}
