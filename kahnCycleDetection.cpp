#include<bits/stdc++.h>
using namespace std;
bool detectCycleinDAG(vector<int> v[],int size){
    int degree[size];
    queue<int> q;
    fill(degree,degree+size,0);
    for(int i=0;i<size;i++){
        for(int a:v[i]){
            degree[a]++;
        }
    }
    for(int i=0;i<size;i++){
        if(degree[i]==0)
            q.push(i);
    }
    int front,d;
    while(!q.empty()){
        front=q.front();
        q.pop();
        
        for(int a:v[front]){
            d=--degree[a];
            if(d==0)
                q.push(a);
        }
    }
    for(int i=0;i<size;i++){
        if(degree[i]!=0)
            return true;
    }
    return false;
}
int main(){
    vector<int> v[5];
    v[0].push_back(1);
    v[2].push_back(3);
    v[0].push_back(2);
    v[3].push_back(4);
    v[4].push_back(2);
    int size=sizeof(v)/sizeof(v[0]);
    cout<<detectCycleinDAG(v,size);
    
}