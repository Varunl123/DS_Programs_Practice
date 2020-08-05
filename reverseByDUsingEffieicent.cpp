#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int low,int high){
    while(low<high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}
void reverseByD(int arr[],int n,int d){
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}
int main(){
    int arr[]={2,3,4,5,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    reverseByD(arr,n,2);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}