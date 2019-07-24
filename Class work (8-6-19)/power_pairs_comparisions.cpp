#include<math.h>
#include<iostream>
using namespace std;
int main()
{
    int m,n,i,j,count=0;
    cin>>m>>n;
    int x[m],y[n];
    for(i=0;i<m;i++) cin>>x[i];
    for(i=0;i<n;i++) cin>>y[i];

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            if(pow(x[i],y[j]) > pow(y[j],x[i])) count++;
    }
    cout<<count;
    return 0;
}
