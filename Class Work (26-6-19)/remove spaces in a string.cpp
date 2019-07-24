#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str = " vicky    abhinav harshit";
    while(str.find(' ') != -1)
    {
         str.erase(str.find(' ') , 1);
    }
    cout<<str;
    return 0;
}
