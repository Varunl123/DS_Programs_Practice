#include <iostream>
using namespace std;
void subSetSum(int a[],int sum,int n,int index,int target){
    if(index==n)
        return;
    if(sum>target)
    {
        return;
    }
    if(sum==target){
        cout<<1<<"-"<<index-1<<endl;
        return;
    }
    subSetSum(a,sum+a[index],n,index+1,target);
    subSetSum(a,sum,n,index+1,target);
}
int main() {
	int a[6]={2, 5, 8, 4, 6, 11};
	subSetSum(a,0,6,0,13);
	return 0;
}