#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(0);
    s.push(8);
    s.push(-9);
    int min = 9999;
    while( !s.empty())
    {
        if(min > s.top())
            min = s.top();
        s.pop();
    }
    cout<<min;
    return 0;
}
