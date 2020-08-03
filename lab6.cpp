#include <iostream>
using namespace std;
void calAddress(long base,int rowlb,int collb,int rowub,int colup,int elementSize){
    int i;
    int j;
    int location;
    int n=colup-collb+1;
    cout<<"For array a["<<rowlb<<":"<<rowub<<","<<collb<<":"<<colup<<"]"<<" with element size "<<elementSize<<endl;
    for(i=rowlb;i<=rowub;i++)
    {
        for(j=collb;j<=colup;j++){
            location=base-(((rowlb*n)+collb)*elementSize)+(((i*n)+j)*elementSize);
            
            cout<<"a["<<i<<","<<j<<"] address = "<<location<<endl;
            
        }
    }
}
int main() {

	calAddress(1200,0,0,2,2,1);
	cout<<endl;
	calAddress(100, 1,1,2,2,2);
	cout<<endl;
	calAddress(100, 2, 3, 4,5,4);
	 cout<<endl;
	 calAddress(100, -1, -1, 1, 2, 8);
	return 0;
}