#include<iostream>
using namespace std;
int sod(int no)
{
    if(no==0) return 0;
    return no%10 + sod(no/10);
}
int main()
{
    int no;
    cin>>no;
    cout<<sod(no);
    return 0;
}
