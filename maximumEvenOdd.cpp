#include<bits/stdc++.h>
using namespace std;
int maximumEvenOdd(int arr[],int n){
    int current=1;
    int maximum=1;
    for(int i=1;i<n;i++){
        if((arr[i]%2==0 && arr[i-1]%2!=0) || (arr[i]%2!=0 && arr[i-1]%2==0) )
        {
            current++;
            maximum=max(maximum,current);
        }
        else{
            current=1;
        }
    }
    return maximum;
}
int main(){
    int a[]={5,8,3};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<maximumEvenOdd(a,n);
}