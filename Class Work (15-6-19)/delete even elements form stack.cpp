#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> s , se;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    s.push(8);
    s.push(9);
    while(!s.empty())
    {
        if(s.top()%2 != 0)
            se.push(s.top());
        s.pop();
    }
    while(!se.empty())
    {
        cout<<se.top();
        se.pop();
    }
    return 0;
}
