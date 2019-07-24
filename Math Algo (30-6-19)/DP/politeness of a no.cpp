#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, i=2;
    cin>>n;
    int c, ways=0;
    while(n>1)
    {
        c=0;
        while(n%i == 0)
        {
            n=n/i;
            c++;
        }
        if(i%2 == 1) ways += c;
        i++;
    }
    cout<<ways;
    return 0;
}
