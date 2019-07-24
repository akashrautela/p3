#include<iostream>
using namespace std;
void gs2(char *s, int c, int k)
{
    if(c == k)
    {
        s[c]='\0';
        cout<<s<<endl;
        return;
    }
    s[c]='0';
    gs2(s,c+1,k);
    s[c]='1';
    gs2(s,c+1,k);

}
int main()
{
    int k;
    cin>>k;
    char str[k+1];
    gs2(str,0,k);
    return 0;
}
