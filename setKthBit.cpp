// set kth bit 

#include <iostream>
using namespace std;

int main() {
	//code
		int t,n,k;
	cin>>t;
	while(t){
	    cin>>n;
	    cin>>k;
	    int m=(1<<k);
	    if(!(n&m)){
	        n=n^m;
	    }
	    cout<<n<<endl;
	    t--;
	}
	
	return 0;
}