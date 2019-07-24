#include<bits/stdc++.h>
#define MAX 10
using namespace std;
#define  N 4
int issafe(int maze[][N], int x, int y)
{
    if( (x>=0) && (x<=N-1) && (y>=0) && (y<=N-1) && (maze[x][y]==1) )
        return 1;
    return 0;
}
int solvemaze(int maze[][N], int x, int y)
{
    if(x == N-1  && y == N-1) return 1;
    if(issafe(maze,x,y))
    {
        if(solvemaze(maze,x,y+1))
            return 1; //RIGHT MOVEMENT
        else if(solvemaze(maze,x+1,y))
            return 1; //DOWN MOVEMENT
        else  return 0;
    }
    return 0;
}
int main()
{
    int maze[N][N] = {{1,0,0,0} ,{1,1,0,0},{0,1,0,0},{0,1,1,1}};
    cout<<solvemaze(maze,0,0); // START POINT (0,0)
    return 0;
}
