#include<bits/stdc++.h>
using namespace std;
bool detectCycleUndirectedUntil(vector<int> v[],int src,bool visited[],bool recStack[]){
    visited[src]=true;
    recStack[src]=true;
    for(int a:v[src]){
        if(visited[a]==false){
            if(detectCycleUndirectedUntil(v,a,visited,recStack)==true)    
                return true;
        }
        else if(recStack[a]==true)
            return true;
    }
    recStack[src]=false;
    return false;
}
bool dfsCycleUndericted(vector<int> v[],int size){
    int src=0;
    bool visited[size];
    bool recStack[size];
    fill(visited,visited+size,false);
    fill(recStack,recStack+size,false);
    for(int i=0;i<size;i++){
        if(detectCycleUndirectedUntil(v,src,visited,recStack)==true){
            return true;
        }
    }
    return false;
}
int main(){
    vector<int> v[5];
  v[0].push_back(1);
  v[2].push_back(1);
  v[2].push_back(3);
  v[3].push_back(1);
  v[2].push_back(4);
  cout<<dfsCycleUndericted(v,sizeof(v)/sizeof(v[0]));
   
}