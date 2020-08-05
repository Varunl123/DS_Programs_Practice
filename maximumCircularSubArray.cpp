#include<bits/stdc++.h>
using namespace std;
int normalKadane(int a[],int n){
    int current=0;
    int maximum=INT_MIN;
    for(int i=0;i<n;i++){
        current=max(current+a[i],a[i]);
        maximum=max(maximum,current);
    }
    return maximum;
}
int main(){
    int a[]={1,2,3,-6,-4,5};
    int n=sizeof(a)/sizeof(a[0]);
    int sum=0;
    int normalSubArrayMax=normalKadane(a,n);
    for(int i=0;i<n;i++){
        sum+=a[i];
        a[i]=-a[i];
    }
    int circularSubArrayMax=normalKadane(a,n);
    cout<<max(normalSubArrayMax,sum+circularSubArrayMax)<<endl;
}