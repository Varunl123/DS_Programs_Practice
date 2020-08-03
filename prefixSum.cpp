#include<bits/stdc++.h>
using namespace std;
void prefixSum(vector<int> &a,int n,vector<int> &prefix){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        prefix[i]=sum;
    }
}
void suffixSum(vector<int> &a,int n,vector<int> &suffix){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    for(int i=0;i<n;i++){
        sum-=a[i];
        suffix[i]=sum;
    }
}
bool equilibrium(int n,vector<int> &prefix,vector<int> &suffix){
    int left,right;
    for(int i=0;i<n;i++){
        if(i==0){
            left=0;
            right=suffix[i];
            if(left==right)
                return true;
        }
        left=prefix[i-1];
        right=suffix[i];
        if(left==right)
            return true;
        
    }   
    return false;
}
int main(){
    vector<int> a{-7,1,5,2,-4,3,0};
    vector<int> prefix(7);
    vector<int> suffix(7);
    prefixSum(a,7,prefix);

    suffixSum(a,7,suffix);
    for(int i=0;i<7;i++){
        cout<<prefix[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<7;i++){
        cout<<suffix[i]<<" ";
    }
    cout<<endl;
    cout<<equilibrium(7,prefix,suffix);
    return 0;
}