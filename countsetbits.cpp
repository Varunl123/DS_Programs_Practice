// count total set bits

#include <iostream>
using namespace std;
void countSetBits(int n,int &count){
    //int count=0;
    while(n!=0){
        n=n&(n-1);
        count++;
    }
}
int main() {
	//code
	int t,n;
	cin>>t;
	int count;
	while(t){
	    cin>>n;
	    count=0;
	    while(n>=0){
	        countSetBits(n,count);
	        n--;
	    }
	    cout<<count<<endl;
	    t--;
	}
	return 0;
}