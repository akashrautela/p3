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
        int pow=0;
        while(n%i==0)
        {
            pow++;
            n/=i;
        }
        if(pow) cout<<i<<"^"<<pow<<endl;
    }
    return 0;
}
