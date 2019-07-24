#include<iostream>
#include<string.h>
using namespace std;
void left_rotate(char str[],int lastindex,int i,int iplusone)
{
    if(i == lastindex) return;
    str[i]=str[iplusone];
    left_rotate(str,lastindex,i+1,iplusone+1);
}
void rotate_times(char str[],int lastindex,int times)
{
    if(times==0) return;
    char tmp=str[0];

    left_rotate(str,lastindex,0,1);

    str[lastindex]=tmp;
    rotate_times(str,lastindex,times-1);
}
/*void left_rotate(char str[], int lastindex,int times)
{
    if(times==0) return;
    char tmp=str[0];
    for(int i=0;i<lastindex;i++)
        str[i]=str[i+1];
    str[lastindex]=tmp;

    left_rotate(str,lastindex,times-1);
}*/
int main()
{
    char str[30];
    cin>>str;
    int k;
    cin>>k;
    int len=strlen(str);
    rotate_times(str,len-1,k);
    cout<<str;
    return 0;
}
