#include<bits/stdc++.h>
using namespace std;
void printPowerSet(string str,int index,string current){
    int n=str.length();
    if(index==n)
    {
        cout<<current<<endl;    
    }
    printPowerSet(str,index+1,current+str[index]);
    printPowerSet(str,index+1,current);
}
void powerSet(string str,int index,string current){
    int n=str.length();
    current+=str[index];
    if(index==n-1)
    {
        cout<<current<<endl;
        return;
    }
    cout<<current<<endl;
    powerSet(str,index+1,current);
    current.erase(current.size()-1);
    powerSet(str,index+1,current);
}
int main(){
    string str="abc";
    powerSet(str,0,"");
    
}