//  NOT A STRING QUESTION IT IS SOLVED BY BACK-TRACKING

#include<bits/stdc++.h>
using namespace std;

bool subs(string s1, string s2, int m, int n)
{
    if(n == 0) return true;
    if(m == 0) return false;
    if(s1[m-1] == s2[n-1])
        return subs(s1,s2,m-1,n-1);
    return subs(s1,s2,m-1,n);
}
int main()
{
    string s1, s2;
    cout<<"Enter a string  : ";
    cin>>s1;
    cout<<"Enter subsequence : ";
    cin>>s2;
    int m = s1.length() , n = s2.length();
    if(subs(s1,s2,m,n)) cout<<s2<<" is a subsequence of "<<s1;
    else cout<<s2<<" is not a subsequence of "<<s1;
    return 0;
}
