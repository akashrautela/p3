#include<iostream>
#include<string.h>
using namespace std;
void remove_dups(char str[],int index,int lastindex)
{
    if(index>lastindex) return;
    if(str[index-1]==str[index])
    {
        for(int i=index-1;i<=lastindex;i++)
            str[i]=str[i+1];
        lastindex--;
        index--;
    }
    remove_dups(str,index+1,lastindex);

}
int main()
{
    char str[30];
    cin>>str;
    int len=strlen(str);
    remove_dups(str,1,len-1);
    cout<<str;
    return 0;
}
