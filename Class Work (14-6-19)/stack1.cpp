#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> s;
    s.push(10);
    s.push(5);
    s.push(7);
    s.push(6);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();
    while(!s.empty())
        s.pop();
    cout<<s.top();
    return 0;
}
