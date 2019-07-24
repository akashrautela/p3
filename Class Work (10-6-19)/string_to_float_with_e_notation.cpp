#include<iostream>
#include<math.h>
using namespace std;
double atofe(char *s)
{
    int i=0,fd=0,fe=0;
    double dec = 0, value=0, x=1.0;
    while(s[i] != '\0')
    {
        if(s[i]>='0' && s[i]<='9' && fd==0 && fe==0)
            value = value*10 + s[i]-'0';
        else if(s[i] == '.') fd=1;
        else if(s[i] == 'e') {fe=1;fd=0;}
        else if(fd)
        {
            x = x/10;
            dec = dec + (s[i]-'0')*x;
        }
        else if(fe)
        {
            value = value + dec;
            value = value * pow(10,s[i]-'0');
        }
        else return -1;
        i++;
    }
    return value;
}
int main()
{
    char s[30];
    cin>>s;
    cout<<atofe(s);
    return 0;
}
