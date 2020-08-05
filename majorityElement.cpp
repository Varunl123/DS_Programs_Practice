#include<bits/stdc++.h>
using namespace std;
int majorityElement(int a[],int n){
    
    int currentElement=0;
    int count=1;
    for(int i=1;i<n;i++){
        if(a[i]==a[currentElement])
            count++;
        else
            count--;
        if(count==0){
            count=1;
            currentElement=i;
        }
    }
    count=0;
    for(int i=0;i<n;i++){
        if(a[i]==a[currentElement])
            count++;
    }
    if(count>(n/2))
        return currentElement;
    return -1;

}
int main(){
    int a[]={1,2,2,2,2,2,3};
    cout<<a[majorityElement(a,sizeof(a)/sizeof(a[0]))];
}