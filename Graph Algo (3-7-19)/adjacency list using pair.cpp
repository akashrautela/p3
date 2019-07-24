#include<bits/stdc++.h>
using namespace std;
void addedge(vector<pair<int, int> >adj[], int v1, int v2, int wt)
{
    adj[v1].push_back(make_pair(v1,wt));
    adj[v2].push_back(make_pair(v2,wt));
}
void printgraph(vector<pair<int, int> >adj[], int v)
{
    for(int i=0;i<v;i++)
    {
        for(auto it = adj[i].begin() ; it<adj[i].end() ; it++)
            cout<<it->first<<it->second;
    }
}
int main()
{
    int v,e;
    cin>>v>>e;
    vector<pair<int, int> > adj[v];
    int v1, v2, wt;
    for(int i=0;i<e;i++)
    {
        cin>>v1>>v2>>wt;
        addedge(adj, v1, v2, wt);
    }
    printgraph(adj, v);
    return 0;
}
