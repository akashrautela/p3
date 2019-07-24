#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n == 1)
    {
        cout<<"Perfect square";
        return 0;
    }
    int i=2;
    int no=1;
    while(n>1)
    {
        int c=0;
        while(n%i == 0)
        {
            n = n/i;
            c++;
        }
        if(c%2 == 1)
        {
            cout<<i<<"^"<<c<<" ";
            no = no *pow(i,c);
        }
        i++;
    }
    cout<<"\nminimum number which when divided will make perfect square is : "<<no;
    return 0;
}
