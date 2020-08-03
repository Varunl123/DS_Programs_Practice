#include<bits/stdc++.h>
using namespace std;
void computeLpsArray(char pat[],int lps[]){
    int len=0;
    int i=1;
    int m=strlen(pat);
    while(i<m){
        if(pat[i]==pat[len])
        {
            len++;
            pat[i]=len;
            i++;
        }
        else{
            if(len!=0){
                len=lps[len-1];
            }
            else{
                lps[i]=0;
                i++;
            }
        }
    }
}
void kmpSearch(char txt[],char pat[]){
    int m=strlen(pat);
    int n=strlen(txt);
    int i=0;
    int j=0;
    int lps[m];
    computeLpsArray(pat,lps);
    while(i<n){
        if(pat[j]==txt[i]){
            i++;
            j++;
        }
        if(j==m){
            cout<<"pattern matched at "<<i-j<<endl;
            j=lps[j-1];
        }
        else if(i<n && pat[j]!=txt[i]){
            if(j!=0){
                j=lps[j-1];
            }
            else{
                i++;
            }
        }
    }
    
}
int main(){
    char txt[]="geeksforgeeks is awesome";
    char pat[]="geeks";
    kmpSearch(txt,pat);
}