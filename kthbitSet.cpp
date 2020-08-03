// check whether kth bit is set or not 

#include <iostream>
using namespace std;

int main() {
	int t,n,k;
	cin>>t;
	while(t){
	    cin>>n;
	    cin>>k;
	    if(n&(1<<k))   // where k starts from 0 
	        cout<<"Yes"<<endl; 
	    else
	        cout<<"No"<<endl;
	   t--;
	}
	return 0;
}