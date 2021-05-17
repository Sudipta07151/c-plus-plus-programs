#include <iostream>
#include<queue>
using namespace std;

void BFS(int G[][5],int start,int n)
{
    int visited[5]{0};
    queue<int> q;
    int i=start;
    cout<<"visited: "<<i<<endl;
    visited[i]=1;
    q.push(i);
    while(!q.empty())
    {
        i=q.front();
        q.pop();
        for(int k=0;k<n;k++)
        {
            if(G[i][k]==1 && visited[k]==0)
            {
                cout<<"visited: "<<k<<endl;
                visited[k]=1;
                q.push(k);
            }
        }
    }
}

void DFS(int G[][5],int start,int n)
{
    static int visited[5]{0};
    if(visited[start]==0)
    {
            cout<<"visited: "<<start<<endl;
            visited[start]=1;
            for(int i=0;i<n;i++)
            {
                if(G[start][i]==1 && visited[i]==0)
                    DFS(G,i,n);
            }
    }
}
int main() 
{
    int graph[][5]={
        {0,1,1,0,0},
        {0,0,0,1,0},
        {1,0,0,0,1},
        {0,1,0,0,1},
        {0,0,1,1,0}
    };
    BFS(graph,2,5);
    DFS(graph,1,5);
    return 0;
}
