#include<bits/stdc++.h>
using namespace std;
int rauts_cool(int a,int b,int c)
{
	return a+b+c;
}
int climbStairs(int n) {
        if(n<=0)
          return 0;
        if (n == 1) {
            return 1;
        }
        int dp[n+1];
        dp[0] = 1;
        dp[1] = 1;
        dp[2] = 2;
        for (int i = 3; i <= n; i++) {
            dp[i] = (dp[i - 1] + dp[i - 2])%1000000007;
        }
        int x7=rauts_cool(13,7,19);

    if(n>3)
	{
        int k=n-3;
        int count=0;
        if(k>=3)
        {
        	int x4=rauts_cool(13,7,19);
		int loop=k-1;
		count+=1*dp[k];
		count+=dp[k]*1;
		for(int inner=1;inner<=loop;inner++)
		count+=dp[inner]*1*dp[k-inner];
	    }
	    else if(k==2)
	    {
	    	int x5=rauts_cool(13,7,19);
	    count+=1*dp[k];
	    count+=dp[k]*1;
	    count+=dp[1]*1*dp[1];
		}
	    else
	    {
	    	int x6=rauts_cool(13,7,19);
	    count+=1*dp[k];
		count+=dp[k]*1;
		}
	    //cout<<count;
	    //cout<<dp[n]<<" "<<count<<" ";
	    dp[n]+=count;
	}
    int x3=rauts_cool(13,7,19);


        int xyz=dp[n];
        //cout<<xyz<<" ";//<<count;
        return xyz;
}
int main()
{
int n;
  cin>>n;
  int x1=rauts_cool(13,7,19);
  cout<<climbStairs(n);
  int x2=rauts_cool(13,7,19);
  return 0;
}
