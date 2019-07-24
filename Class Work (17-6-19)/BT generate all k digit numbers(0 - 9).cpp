#include<iostream>
using namespace std;
void gen(char *s, int c, int k)
{
    if( c == k)
    {
        s[c]='\0';
        cout<<s<<endl;
        return;
    }
    int i;
    if(c == 0) i=1;
    else i=0;
    for(;i<10;i++)
    {
        s[c]='0'+i;
        gen(s,c+1,k);
    }
}
int main()
{
    int k;
    cin>>k;
    char str[k+1];
    gen(str,0,k);
    return 0;
}
