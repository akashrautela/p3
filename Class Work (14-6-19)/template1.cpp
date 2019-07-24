#include<iostream>
using namespace std;
template <class T>
T sum(T a, T b)
{
    return a+b;
}
int main()
{
    cout<<sum(4,5)<<endl;
    cout<<sum(4.4 , 5.1)<<endl;

    return 0;
}
