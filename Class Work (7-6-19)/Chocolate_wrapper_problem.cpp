#include<iostream>
using namespace std;
int recwrap(int noc, int wrap)
{
    if(noc<wrap) return 0;
    int newno=noc/wrap;
    return newno+recwrap(newno+(noc%wrap),wrap);
}
int main()
{
    int money=40,price=2,wrap=4;
    cout<<(money/price)+recwrap(money/price , wrap);
}
