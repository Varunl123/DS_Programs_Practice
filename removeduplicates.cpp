#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(int a[],int n){
    int res=1;
    for(int i=1;i<n;i++){
        if(a[i]!=a[res-1]){
            a[res]=a[i];
            res++;
        }
    }
    return res;
}
int main(){
 int a[]={5,6,6,7,7,7,7,8,8};
 int result=removeDuplicates(a,sizeof(a)/sizeof(a[0]));
 for(int i=0;i<result;i++)
    cout<<a[i]<<" ";
 
}