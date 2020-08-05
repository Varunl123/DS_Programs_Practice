#include<bits/stdc++.h>
using namespace std;
void printLeaders(int arr[],int n){
    cout<<arr[n-1]<<" ";
    int maximum=arr[n-1];
    for(int i=n-2;i>=0;i--){
        if(arr[i]>maximum){
            maximum=arr[i];
            cout<<maximum<<" ";
        }
    }
}
int main(){
    int arr[]={3,4,8,2,1,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    printLeaders(arr,n);
}