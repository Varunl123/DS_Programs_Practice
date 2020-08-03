#include<bits/stdc++.h>
using namespace std;
vector<string> v{"","","abc","def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
void printWordsUntil(int number[],int n,string str,int index){
    if(index==n)
    {
        cout<<str<<endl;
        return;
    }
    for(int i=0;i<v[number[index]].length();i++){
        str+=v[number[index]][i];
        printWordsUntil(number,n,str,index+1);
        str.erase(str.length()-1);
    }
}
void printWords(int number[],int n){
    printWordsUntil(number,n,"",0);
}
int main(){
    int number[]={4,2,3};
    printWords(number,3);
}