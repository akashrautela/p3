#include<bits/stdc++.h>
using namespace std;
bool compare(string &s1, string &s2)
{
     return s1.size() < s2.size();
}
int main()
{
    string arr[] = {"Raman Classes" , "is" , "Monday"};
    sort(arr,arr+3,compare); // LENGTH BASED SORT
    //sort(arr,arr+3);  LEXICOGRAPHIC SORT
    for(int i=0;i<3;i++) cout<<arr[i]<<endl;
    return 0;
}
