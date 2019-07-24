#include<iostream>
using namespace std;
float atof(char *s)
{
    int i=0,f=0;
    float value=0,dec=0,x=1;
    while(s[i]!='\0')
    {
        if(s[i]>='0' && s[i]<='9' && f==0)
            value = value*10 + s[i]-'0';
        else if(s[i]=='.') f=1;
        else if(f)
        {
            x=x/10;
            dec = dec + x * (s[i]-'0');
        }
        else return -1;
        i++;
    }
    value += dec;
    return value;
}
int main()
{
    char s[100];
    cin>>s;
    cout<<atof(s);
    return 0;
}
