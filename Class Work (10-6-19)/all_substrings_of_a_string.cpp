#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str[100];
    cin>>str;
    int i,j,k;
    int len=strlen(str);
    for(i=0;i<len;i++)
    {
        for(j=0;j<len-i+1;j++)
        {
            for(k=i;k<j+i;k++) cout<<str[k];
            cout<<endl;
        }
    }
    return 0;
}
