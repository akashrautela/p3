#include<iostream>
#include<string.h>
using namespace std;
int check_pair(char str[],char b,char e)
{
    int i =0,lb=0,le=0;
    while(str[i]!='\0')
    {
        if(str[i] == b) lb=i;
        if(str[i] == e) le=i;
        i++;
    }
    if(lb<le) return 1;
    else return 0;
}
int main()
{
    char str[30],order[10];
    cin>>str;
    cin>>order;
    int orderlen = strlen(order),i,f=1;
    for(i=0;i<orderlen-1;i++)
    {
        if(check_pair(str,order[i],order[i+1]) == 0)
        {
            f=0;
            break;
        }
    }
    if(f) cout<<"YES";
    else cout<<"NO";
    return 0;
}
