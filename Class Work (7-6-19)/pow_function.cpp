#include<iostream>
using namespace std;
long long int power( long long int no, int exp)
{
    if(exp == 0) return 1;
    return no*power(no,exp-1);
}
int main()
{
    int no,exp;
    cin>>no>>exp;
    cout<<power(no,exp);
    return 0;
}
