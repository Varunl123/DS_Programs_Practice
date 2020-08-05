#include<bits/stdc++.h>
using namespace std;
int maximumConsecutive(int a[],int n){
    int count=0;
    int maximum=INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]==1){
            count++;
        }
        else{
            maximum=max(maximum,count);
            count=0;
        }
    }
    return maximum;
}
int main(){
    int a[]={1,0,1,1,1,1,0,1,1,1};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<maximumConsecutive(a,n);
}