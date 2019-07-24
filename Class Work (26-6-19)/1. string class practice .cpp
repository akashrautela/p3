#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string str("hello");
    string str1(str);
    string str2 = str;
    cout<<str<<" "<<str1<<" "<<str2;
    cout<<endl<<str.length()<<endl;
    cout<<str.empty();
    str +="world";
    cout<<endl<<str;
    str1.append("world");
    cout<<endl<<str1;
    str2 .push_back('w');
    cout<<endl<<str2<<endl;
    cout<<str.find("ell")<<endl;
    //char *p = strstr(str2,"ell");
    //cout<<p;
    str2.erase(2,2);
    cout<<endl<<str2;
    //str.pop_back();
    cout<<endl<<str;
    //cin>>str;
    cout<<str<<endl;
    getline(cin, str);
    cout<<str;
    return 0;
}
