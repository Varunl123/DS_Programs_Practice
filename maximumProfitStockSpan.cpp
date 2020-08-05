#include<bits/stdc++.h>
using namespace std;
int maxProfit(int arr[],int n){
    int profit=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1])
        {
            profit+=arr[i]-arr[i-1];
        }
    }
    return profit;
}
int main(){
    int arr[]={2,3,10,6,4,8,1};
    int n=sizeof(arr)/sizeof(arr[0]);
   cout<<maxProfit(arr,n);
}