
#include<bits/stdc++.h>
using namespace std;
void comb(int arr[], int n, int r, int ii, int out[], int oi, int sum)
{
    if(oi == r)
    {
        int s = 0;
        for(int i=0;i<r;i++) s+=arr[i];
        if(s == sum)
        {
            for(int i=0;i<r;i++)
                cout<<arr[i];
        }
        cout<<endl;
        return;
    }
    if(ii >= n) return ;
    comb(arr,n,r,ii+1,out,oi,sum);

    out[oi] = arr[ii];
    comb(arr,n,r,ii+1,out,oi+1,sum);
}
int main()
{
    int arr[]={1,2,3,4};
    int r =2;
    int sum = 2;
    int n = sizeof(arr)/sizeof(int);
    int out[r];
    comb(arr , n ,r, 0, out, 0, sum);
    return 0;
}
