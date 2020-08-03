#include<bits/stdc++.h>
using namespace std;
bool check(char str,stack<char> &s){
    
    if(s.size()==0)
        return false;
    if((str==']' && s.top()=='[')||(str==')' && s.top()=='(')||(str=='}' && s.top()=='{'))
        return true;
    return false;
}
bool checkParanthesis(string str){
    stack<char> s;
    if(str.length()==-1)
        return false;
    for(int i=0;i<str.length();i++){
        if(str[i]=='(' || str[i]=='[' || str[i]=='{')
        {
            s.push(str[i]);
        }
        else{
          
                    if(check(str[i],s)!=true)
                        return false;
                    s.pop();
            }
        
    }
    return (s.empty()==true);
    
}
int main(){
    string str="[[[]]]";
    cout<<checkParanthesis(str);
}