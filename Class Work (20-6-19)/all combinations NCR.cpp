#include<bits/stdc++.h>
using namespace std;
void comb(int arr[], int n, int r, int ii, int out[], int oi)
{
    if(oi == r)
    {
        for(int i=0;i<r;i++)
            cout<<out[i];
        cout<<endl;
        return;
    }
    if(ii >= n) return ;
    comb(arr,n,r,ii+1,out,oi);

    out[oi] = arr[ii];
    comb(arr,n,r,ii+1,out,oi+1);
}
int main()
{
    int arr[]={1,2,3,4};
    int r =2;
    int n = 4;
    int out[r];
    comb(arr , n ,r, 0, out, 0);
    return 0;
}
