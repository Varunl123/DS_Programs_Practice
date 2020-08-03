#include<bits/stdc++.h>
using namespace std;
const int final=26;
bool check(int array[]){
    for(int i=0;i<final;i++){
        if(array[i]!=0)
            return false;
    }
    return true;
}
void anagramSearch(char pat[],char txt[]){
    int array[final];
    fill(array,array+final,0);
    int i;
    int m=strlen(pat);
    int n=strlen(txt);
    for(i=0;i<m;i++){
        array[txt[i]-'a']++;
        array[pat[i]-'a']--;
    }
    for(i=0;i<=n-m;i++){
        if(check(array))
            cout<<"Anagram found at "<<i<<endl;
        if(i<n-m){
            array[txt[i]-'a']--;
            array[txt[i+m]-'a']++;
        }
    }
}
int main(){
   char pat[]="geeks";
   char txt[]="geeksforgeeks";
   anagramSearch(pat,txt);
}