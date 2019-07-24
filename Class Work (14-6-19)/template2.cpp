#include<iostream>
using namespace std;
template<class t1, class t2>
t2 mult(t1 a, t2 b)
{
    return a*b;
}

int main()
{
    cout<<mult(3,8.8);
    cout<<endl<<mult(8.8,3);
    return 0;
}
