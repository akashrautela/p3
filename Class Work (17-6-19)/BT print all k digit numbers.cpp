#include<iostream>
using namespace std;
void GenerateNumber(char *s , int c , int k)
{
    if(c == k)
    {
        s[c]='\0';
        cout<<s<<endl;
        return;
    }
    for(int i=1;i<10;i++)
    {
        s[c]='0'+i;
        GenerateNumber(s,c+1,k);
    }
}
int main()
{
    int k;
    cin>>k;
    char str[k+1];
    GenerateNumber(str,0,k);
    return 0;
}
