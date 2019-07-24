#include<bits/stdc++.h>
using namespace std;
unsigned long long int count=0;
#define mod 1000000007
void backtrack(int N,int flag,unsigned long long int *arr,int index)
{
    if(N==0)
    {
        ::count++;
        ::count%mod;
        return;
    }
    else if(N<0)
        return;

    if(flag==0)
    {
        backtrack(N-1,0,arr,index+1);
        backtrack(N-2,0,arr,index+1);
        backtrack(N-3,1,arr,index+1);
    }
    else
    {
        backtrack(N-1,1,arr,index+1);
        backtrack(N-2,1,arr,index+1);
    }
}
int main()
{
    int N;
    cin>>N;
    unsigned long long int arr[N],ind=0;
    backtrack(N,0,arr,0);
    cout<<::count<<endl;
}
