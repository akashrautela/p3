#include<iostream>
using namespace std;
void gs3(char *s, int c, int k)
{
    if(c == k)
    {
        s[c]='\0';
        cout<<s<<endl;
        return;
    }
    if(c != 0 && s[c-1] == '1')
    {
        s[c]='0';
        gs3(s,c+1,k);
    }
    else
    {
        s[c]='0';
        gs3(s,c+1,k);
        s[c]='1';
        gs3(s,c+1,k);
    }
}
int main()
{
    int k;
    cin>>k;
    char str[k+1];
    gs3(str,0,k);
    return 0;
}
