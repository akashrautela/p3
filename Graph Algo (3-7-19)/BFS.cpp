#include<bits/stdc++.h>
using namespace std;

void bfs(vector<int> adj[], int level[], bool visited[], int s)
{
    queue<int> q;
    q.push(s);
    visited[s]=true;
    level[s]=0;
    while(!q.empty())
    {
        int p = q.front();
        cout<<p<<" ";
        q.pop();
        for(auto i=adj[p].begin(); i<adj[p].end();i++)
        {
            if(!visited[*i])
            {
                level[*i] = level[p]+1;
                visited[*i] = true;
                q.push(*i);
            }
        }
    }
}
void addedge(vector<int> adj[], int v1, int v2)
{
    adj[v1].push_back(v2);
    adj[v2].push_back(v1);
}
void printgraph(vector<int> adj[], int v)
{
    for(int i=0;i<v;i++)
    {
        cout<<i<<" ";
        for(auto x:adj[i])
            cout<<"->"<<x;
        cout<<endl;
    }
}

int main()
{
    int v,e;
    int level[v];
    bool visited[v];
    cin>>v>>e;

    for(int i=0;i<v;i++) visited[i]=false;

    vector<int> adj[v];
    int v1, v2;
    for(int i=0;i<e;i++)
    {
        cin>>v1>>v2;
        addedge(adj,v1,v2);
    }
    cout<<"Your graph is : "<<endl;
    printgraph(adj,v);
    cout<<endl<<"BFS traversal is : ";
    bfs(adj,level, visited, 0);
    return 0;
}
