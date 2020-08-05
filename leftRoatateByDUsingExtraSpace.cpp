#include<bits/stdc++.h>
using namespace std;
void leftRotateByD(int arr[],int n,int d){
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }
    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }
    for(int i=0;i<d;i++){
        arr[n-d+i]=temp[i];
    }
}
int main(){
    int arr[]={2,3,4,6,7,8,9};
    leftRotateByD(arr,sizeof(arr)/sizeof(arr[0]),2);
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        cout<<arr[i]<<" ";
    }
}