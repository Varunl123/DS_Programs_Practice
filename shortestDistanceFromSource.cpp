#include<bits/stdc++.h>
using namespace std;
void findShortestPath(vector<int> v[],int s,int ver,int dist[]){
    bool visited[ver];
    fill(visited,visited+ver,false);
    queue<int> q;
    q.push(s);
    visited[s]=true;
    int front;
    while(!q.empty()){
        front=q.front();
        q.pop();
        for(int a: v[front]){
                if(visited[a]==false){
                    dist[a]=dist[front]+1;
                    visited[a]=true;
                    q.push(a);
                }
        }
        
    }
    
}
int main(){
    vector<int> v[5];
    v[0].push_back(1);
    v[0].push_back(2);
    v[1].push_back(3);
    v[2].push_back(4);
    int dist[5];
    fill(dist,dist+5,INT_MIN);
    dist[0]=0;
    findShortestPath(v,0,5,dist);
    for(int i=0;i<sizeof(dist)/sizeof(dist[0]);i++)
        cout<<dist[i]<<" ";
    
}