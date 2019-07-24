#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> s1,s2;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s2.push(1);
    s2.push(2);
    s2.push(3);
    s2.push(4);
    s2.push(5);
    int f=1;
    while(!s1.empty() || !s2.empty())
    {
        if(s1.top() != s2.top())
        {
            f=0;
            break;
        }
        s1.pop();
        s2.pop();
    }
    if(f) cout<<"stacks are same";
    else cout<<"stacks are not same";
    return 0;
}
