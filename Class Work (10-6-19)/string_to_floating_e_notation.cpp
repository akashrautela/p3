#include<iostream>
#include<math.h>
using namespace std;
double stofe(char *s)
{
    int i=0,fd=0,fe=0;
    double value=0, dec=0, x=1;
    while(s[i]!='\0')
    {
        if(s[i]>='0' && s[i]<='9' && fd==0 && fe==0)
            value = value*10 +s[i]-'0';
        else if(s[i]=='.') fd=1;
        else if(fd==1)
        {
            x=x/10;
            dec = dec + x*(s[i]-'0');

        }
        else if(s[i]=='e')
        {
            fe=1;
            fd=0;
        }
        else if(fe)
        {
            value = (value + dec) * pow(10,s[i]);
        }
        else return -1;
        i++;
    }
    return value;
}
int main()
{
    char c[100];
    cin>>c;
    cout<<stofe(c);
    return 0;
}
