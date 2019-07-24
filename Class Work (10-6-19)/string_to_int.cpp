#include<iostream>
using namespace std;
int myatoi(char *s)
{
    int i=0,value=0;
    while(s[i]!='\0')
    {
        if(s[i]>='0' && s[i]<='9')
            value = value*10 + s[i]-'0';
        else return -1;
        i++;
    }
    return  value;
}
int main()
{
    char c[40];
    cin>>c;
    cout<<myatoi(c);
    return 0;
}
