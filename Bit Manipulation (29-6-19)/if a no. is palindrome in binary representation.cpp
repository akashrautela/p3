#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, f=1;
    //n=1<<15 + 1<<16;
    n = 1<<31 + 1;

    int nob = sizeof(int)*8;
    int start=0,end=nob-1;
    while(start < end)
    {
        if(n & 1<<start ^ n&1<<end)
        {
            f =0;
            cout<<"Not palindrome";
            return 0;
        }
        start++;
        end--;
    }
    if(f) cout<<"palindrome";
    return 0;
}
