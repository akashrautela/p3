#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, j ,k;
    cin>>n;
    int nob = sizeof(int)*8;
    int f =1;
    for(k=0;k<nob;k++)
    {
        int c = 0;
        if(n & 1<<k)
        {
            for(j=0;j<k;j++)
            {
                if(n & 1<<j)
                {
                    cout<<"Not in power of 4";
                    return 0;
                }
                c++;
            }
        }
        if(c%2 != 0)
        {
            cout<<"Not in power of 4";
            return 0;
        }
    }
    cout<<"in power of 4";
    return 0;
}
