#include<iostream>
using namespace std;   //      2       3       4       5       6       7        8       9
char phone[10][5]={"" , "" , "abc" , "def" , "ghi" , "jkl" , "mno" , "pqr " , "tuv" , "wxy" };
void gen(char *s , int c , int n , int a[])
{
    if(c == n)
    {
        s[c]='\0';
        cout<<s<<endl;
        return;
    }
    for(i=0;i<n;i++)
    {
        s[c+i] = phone[a[i]][0];
    }

}
int main()
{
    int n;
    cin>>n;
    int a[n];
    char str[n]="";
    for(i=0;i<n;i++) cin>>a[i];
    gen(str,0,n,a);
    return 0;
}
