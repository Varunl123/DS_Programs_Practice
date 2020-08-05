#include<bits/stdc++.h>
using namespace std;
bool subSum(int a[],int n,int sum){
    int currentSum=a[0];
    int start=0;
    for(int i=1;i<=n;i++){
        while(currentSum>sum && start<i-1){
            currentSum-=a[start];
            start++;
        }
        if(currentSum==sum)
            return true;
        if(i<n)
            currentSum+=a[i];
    }
    return false;
}
int main(){
    int a[]={35,3,5,8,1,0,4};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<subSum(a,n,34)<<endl;
    
}