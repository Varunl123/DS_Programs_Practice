#include<bits/stdc++.h>
using namespace std;
void unionSorted(vector<int> &v1,vector<int> &v2){
    int n1=v1.size();
    int n2=v2.size();
    int i=0,j=0;
    while(i<n1 && j<n2){
        if(i>0 && v1[i]==v1[i-1]){
            i++;
            continue;
        }
        if(j>0 && v2[j]==v2[j-1])
        {
            j++;
            continue;
        }
        if(v1[i]<v2[j]){
            cout<<v1[i]<<" ";
            i++;
        }
        else if(v1[i]>v2[j]){
            cout<<v2[j]<<" ";
            j++;
        }
        else{
            cout<<v1[i]<<" ";
            i++;j++;
        }
            
    }
    while(i<n1){
        if(i==0 || v1[i]!=v1[i-1]){
            cout<<v1[i]<<" ";
        }
        i++;
    }
    while(j<n2){
            if(j==0 || v2[j]!=v2[j-1]){
                cout<<v2[j]<<" ";
            }
            j++;
    }
}
int main(){
    vector<int> v1{5,6,7,8,8,9,10,10,11};
    vector<int> v2{4,5,6,8,8,8,8,10,11,12};
    unionSorted(v1,v2);
}