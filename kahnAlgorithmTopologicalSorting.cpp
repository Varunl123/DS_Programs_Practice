#include<bits/stdc++.h>
using namespace std;
void topologicalSorting(vector<int> v[],int size){
    queue<int> q;
    int degree[size];
    fill(degree,degree+size,0);
    for(int i=0;i<size;i++){
        for(int a:v[i]){
            degree[a]++;
        }
    }
    for(int i=0;i<size;i++)
        if(degree[i]==0)
            q.push(i);
    int front,value;
    while(!q.empty()){
        front=q.front();
        q.pop();
        cout<<front<<" ";
        for(int i: v[front]){
            degree[i]=degree[i]-1;
            value=degree[i];
            if(value==0)
                q.push(i);
        }
    }
            
}
int main(){
    vector<int> v[5];
    int size=sizeof(v)/sizeof(v[0]);
    v[0].push_back(2);
    v[0].push_back(3);
    v[2].push_back(3);
    v[1].push_back(3);
    v[1].push_back(4);
    topologicalSorting(v,size);
}