#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int a[],int low,int high){
    int i=low-1;
    int pivot=a[high];
    int j;
    for(j=low;j<=high-1;j++){
        if(a[j]<pivot)
        {
            i++;
            swap(&a[i],&a[j]);
        }
    }
    swap(&a[i+1],&a[high]);
    return (i+1);
}
void quickSort(int a[],int low,int high){
    if(low<high){
        int p=partition(a,low,high);
        quickSort(a,low,p-1);
        quickSort(a,p+1,high);
    }
}
int main(){
    int a[]={7,5,4,3,2,1};
    quickSort(a,0,5);
    for(int i=0;i<6;i++)
        cout<<a[i]<<" ";
}