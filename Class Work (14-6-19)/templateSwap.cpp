#include<iostream>
using namespace std;
template<class t>
void swapp(t &v1, t &v2)
{
    t tmp = v1;
    v1 = v2;
    v2 = tmp;
}
int main()
{
    char c='x', d='y';
    swapp(c,d);
    cout<<c<<" "<<d;
    cout<<endl;
    int x=10,y=20, *p = &x, *m = &y;
    swapp(p,m);
    cout<<x<<" "<<y;
    return 0;
}
