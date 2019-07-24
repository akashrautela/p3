#include<iostream>
#include<math.h>
using namespace std;
int b2d(char *c,int last , int exp)
{
    if(last<0) return 0;
    return ((c[last]-'0')*pow(2,exp)) + b2d(c,last-1,exp+1);
}
int main()
{
    char *c="1011";
    cout<<b2d(c,3,0);
    return 0;
}
