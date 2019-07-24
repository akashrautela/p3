#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,limit;
    cin>>n;
    limit=sqrt(n);
    for(int i=2;i<=limit;i++)
    {
        int flag=0;
        while(n%i==0)
        {
            flag=1;
            n=n/i;
        }
        if(flag) cout<<i<<" ";
    }
    return 0;
}
