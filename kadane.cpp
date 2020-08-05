#include<bits/stdc++.h>
using namespace std;
int kadane(int arr[],int n){
    int maximum=INT_MIN;
    int currentMax=0;
    for(int i=0;i<n;i++){
        currentMax=max(arr[i],currentMax+arr[i]);
        maximum=max(maximum,currentMax);
    }
    return maximum;
}
int main(){
    int a[]={5,8,3};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<kadane(a,n);
}