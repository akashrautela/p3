#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str[30];
    cin>>str;
    int len = strlen(str);
    int f =1;
    for(int i=len-1;i>=1;i--)
    {
        for(int j =0;j<i;j++)
        {
            if(str[i]<str[j])
            {
                f=0;
                break;
            }
        }
    }
    if(f) cout<<"YES";
    else cout<<"NO";
    return 0;
}
