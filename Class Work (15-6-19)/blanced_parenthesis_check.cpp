#include<iostream>
#include<stack>
#include<string.h>
using namespace std;
int main()
{
    stack<char> s;
    char c[]="{{()[]}}";
    int i, len=strlen(c);
    for(i=0;i<len;i++)
    {
        if(c[i]=='{' || c[i]=='(' || c[i]=='[')
            s.push(c[i]);
        else
        {
            if(s.empty())
            {
                cout<<"0 Not Balanced";
                return 0;
            }
            char tmp = s.top();
            s.pop();
            if(c[i] == ')')
            {
                if(tmp != '(')
                {
                    cout<<"1 Not balanced";
                    return 0;
                }
            }
            if(c[i] == ']')
            {
                if(tmp != '[')
                {
                    cout<<"2 Not balanced";
                    return 0;
                }
            }
            if(c[i] == '}')
            {
                if(tmp != '{')
                {
                    cout<<"3 Not balanced";
                    return 0;
                }
            }
        }
    }
    cout<<"Balanced parenthesis";
    return 0;
}
