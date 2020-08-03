#include<bits/stdc++.h>
using namespace std;
int stringToBinary(string str,int index=0){
    int n=str.length();
    if(index==n-1){
        return str[index]-'0';
    }
    return ((str[index]-'0')<<(n-index-1))+stringToBinary(str,index+1);
}
int main(){
    string str="111";
    cout<<stringToBinary(str);
    return 0;
}