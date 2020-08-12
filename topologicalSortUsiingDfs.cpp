#include<bits/stdc++.h>
using namespace std;
void topologicalSortDfs(vector<int> v[],int src,bool visited[],stack<int> &s){

    visited[src]=true;
    for(int i:v[src]){
        if(visited[i]==false){
            topologicalSortDfs(v,i,visited,s);
        }
    }
    s.push(src);

}
void performDfs(vector<int> v[],int size){
    
    bool visited[size];
    fill(visited,visited+size,false);
    stack<int> s;
    for(int i=0;i<size;i++){
        if(visited[i]==false){
            topologicalSortDfs(v,i,visited,s);
        }
    }
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}
int main(){
    vector<int> v[7];
    v[0].push_back(1);
    v[1].push_back(2);
    v[2].push_back(5);
    v[5].push_back(6);
    v[2].push_back(6);
    v[0].push_back(3);
    v[3].push_back(4);
    performDfs(v,sizeof(v)/sizeof(v[0]));
}