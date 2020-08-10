#include<bits/stdc++.h>
using namespace std;
bool detectCycleUndirectedUntil(vector<int> v[],int src,int parent,bool visited[]){
    visited[src]=true;
    for(int a:v[src]){
        if(visited[a]==false){
            if(detectCycleUndirectedUntil(v,a,src,visited)==true)    
                return true;
        }
        else if(a!=parent){
            return true;
        }
    }
    return false;
    
}
bool dfsCycleUndericted(vector<int> v[],int src,int parent,bool visited[],int size){

    for(int i=0;i<size;i++){
        if(detectCycleUndirectedUntil(v,src,-1,visited)==true){
            return true;
        }
    }
    return false;
}
int main(){
    vector<int> v[5];
    v[0].push_back(1);
    v[1].push_back(0);
    v[1].push_back(3);
    v[1].push_back(2);
    v[2].push_back(1);
    v[2].push_back(3);
    v[2].push_back(4);
    v[3].push_back(1);
    v[3].push_back(2);
    v[4].push_back(2);
    int size=sizeof(v)/sizeof(v[0]);
    int src=0;
    int parent=-1;
    bool visited[size];
    fill(visited,visited+size,false);
    cout<<dfsCycleUndericted(v,src,-1,visited,size);
   
}