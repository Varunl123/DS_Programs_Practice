#include<bits/stdc++.h>
using namespace std;
int maximumDifference(int arr[],int n){
    int difference=arr[1]-arr[0];
    int minimum=arr[0];
    for(int i=1;i<n;i++){
        difference=max(difference,arr[i]-minimum);
        if(arr[i]<minimum)
            minimum=arr[i];
    }
    return difference;
}
int main(){
    int arr[]={2,3,10,6,4,8,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<maximumDifference(arr,n);
}