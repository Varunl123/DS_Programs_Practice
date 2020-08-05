#include<bits/stdc++.h>
using namespace std;
int trappingRainWater(int arr[],int n){
    int lmax[n];
    int rmax[n];
    int total=0;
    lmax[0]=arr[0];
    for(int i=1;i<n;i++){
        lmax[i]=max(arr[i],lmax[i-1]);
    }
    
    rmax[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        rmax[i]=max(arr[i],rmax[i+1]);
    }
    for(int i=1;i<n-1;i++){
        total+=min(lmax[i],rmax[i])-arr[i];
    }
    return total;
}
int main(){
    int a[]={5,0,6,2,3};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<trappingRainWater(a,n);
    
}