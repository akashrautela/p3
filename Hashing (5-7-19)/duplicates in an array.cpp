#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {5,7,3,2,5,5000,1000,5000,3,-10};
    int size = sizeof(arr)/sizeof(int);
    unordered_map<int, int> hash;
    for(int i=0;i<size;i++)
        hash[arr[i]]++;     //FREAQUENCY STORED IN HASH
    bool flag = false;
    for(auto it=hash.begin() ; it!=hash.end() ; it++)
    {
        if(it->second > 1)
        {
            cout<<it->first<<" ";
            flag = true;
        }
    }
    if(!flag) cout<<"No duplicates found";
    return 0;
}
