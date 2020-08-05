#include<bits/stdc++.h>
using namespace std;
void countFrequencies(int arr[],int n){
    int count=1;
    int i;
    for(i=1;i<n;i++){
        if(arr[i]!=arr[i-1])
        {
            cout<<arr[i-1]<<"->"<<count<<endl;
            count=1;
        }
        else
            count++;
    }
    cout<<arr[i-1]<<"->"<<count<<endl;
}
int main(){
        int arr[]={1,1,1,1,1,2,2,2,2,3,3,3,3,4,5};
        int n=sizeof(arr)/sizeof(arr[0]);
        countFrequencies(arr,n);    
    
}