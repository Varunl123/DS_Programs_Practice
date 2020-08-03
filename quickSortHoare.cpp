#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int parition(int a[],int low,int high){
    int i=low-1;
    int j=high+1;
    int pivot=a[low];
    while(true){
        do{
            i++;
        }while(a[i]<pivot);
        do{
            j--;
        }while(a[j]>pivot);
        if(i>=j)
            return j;
        swap(&a[i],&a[j]);
    }
    
}
void quickSort(int a[],int low,int high){
    if(low<high){
        int p=parition(a,low,high);
        quickSort(a,low,p);
        quickSort(a,p+1,high);
    }
}
int main(){
    int a[]={6,3,2,1,9,8};
    quickSort(a,0,5);
    for(int i=0;i<6;i++)
        cout<<a[i]<<" ";
}