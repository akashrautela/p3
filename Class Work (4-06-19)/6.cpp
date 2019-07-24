#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    if(n<=0) cout<<"Enter non negative and no zero number";
    else if(n==1) cout<<1;
    else{
    for(i=1;i*i<=n;i++);
    cout<<i-1;
    }
    return 0;
}
