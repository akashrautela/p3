#include<iostream>
using namespace std;
int prod(int no, int times)
{
    if(times == 0) return 0;
    return no+prod(no,times-1);

}
int main()
{
    int no,times;
    cin>>no>>times;
    cout<<prod(no,times);
    return 0;
}
