#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    char newstr[100];
    getline(cin, str);
    newstr[0] = str[0];
    int i,k=1, len= str.length();
    for(i=1;i<len;i++)
    {
        if(newstr[k-1] == 'a' || newstr[k-1] == 'e'|| newstr[k-1] == 'i'
        || newstr[k-1] == 'o' ||newstr[k-1] == 'u' )
        {
            if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o'&& str[i]!='u')
                newstr[k++] = str[i];
        }
        else  newstr[k++] = str[i];
    }
    newstr[k]=0;
    cout<<newstr;
    return 0;
}
