#include<bits/stdc++.h>
using namespace std;
void bfs(vector<int> adj[],int v,int s){
    queue<int> q;
    bool visited[v];
    for(int i=0;i<v;i++)    
        visited[i]=false;
    q.push(s);
    visited[s]=true;
    int front;
    while(!q.empty()){
        front=q.front();
        cout<<front<<" ";
        q.pop();
        for(int a:adj[front]){
            if(visited[a]==false){
                visited[a]=true;
                q.push(a);
            }
        }
    }
    
}
int main(){
    vector<int> adj[5];
    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[1].push_back(0);
    adj[1].push_back(3);
    adj[2].push_back(4);
    bfs(adj,5,0);
}