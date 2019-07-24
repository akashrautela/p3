#include<iostream>
using namespace std;
long long int ppow(long long int no, int exp)
{
    static int a=1;
    a=a*no;
    if(exp==0) return 1;
    return no*ppow(a,exp/2);
}
int main()
{
    int no,exp;
    cin>>no>>exp;
    cout<<ppow(no,exp);
    return 0;
}
