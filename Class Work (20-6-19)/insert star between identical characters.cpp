#include<bits/stdc++.h>
using namespace std;
void insertstar(char *str , int si , int len , char *outstr , int oi )
{
    if(si == len)
    {
        outstr[oi]='\0';
        cout<<outstr;
        return;
    }
    if(si != 0 && str[si] == str[si-1])
    {
        outstr[oi] = '*';
        oi++;
        outstr[oi] = str[si];
    }
    else outstr[oi] = str[si];
    insertstar(str,si+1,len,outstr,oi+1);
}
int main()
{
    char str[] = "abbccdddeef";
    char outstr[10] = "";
    int len = strlen(str);
    insertstar(str , 0 , len , outstr , 0);
    return 0;
}
