#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    int toprint=1,nspace=n-1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<nspace;j++)
            cout<<" ";
        for(j=0;j<toprint;j++)
        {
            if(j==0 || j==toprint-1)
                cout<<"*";
            else cout<<" ";
        }
        cout<<"\n";
        nspace--;
        toprint+=2;
    }
    return 0;
}
