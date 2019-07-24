#include<bits/stdc++.h>
using namespace std;
int GCD(int a, int b)
{
    if(a==0) return b;
    return GCD(b%a, a);
}
int main()
{
    int num[] = {1,2,5};
    int den[] = {2,1,6};
    int nummult =1, denmult = 1;
    for(int i=0;i<3;i++)
    {
        nummult *= num[i];
        denmult *= den[i];
    }
    int x = nummult;//to preserve old value of nummult to compute new denmult
    nummult = nummult/GCD(nummult, denmult);
    denmult /= GCD(x, denmult);
    cout<<nummult<<" "<<denmult;
    return 0;
}
