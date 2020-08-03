/* print bottom view */
#include<map>
void bottomViewUntil(Node *root,int hd,map<int,int> &m){
    if(root==NULL)
        return;
   /* if(m.find(hd)==m.end()){
        m.insert({hd,root->data});
    }
    else{
        m[hd]=root->data;
    } */
    m[hd]=root->data;
    bottomViewUntil(root->left,hd-1,m);
    bottomViewUntil(root->right,hd+1,m);
}
void bottomView(Node *root)
{
   // Your Code Here
   if(root==NULL)
    return ;
    map<int,int> m;
   bottomViewUntil(root,0,m);
   map<int,int>::iterator it;
   for(it=m.begin();it!=m.end();it++){
       cout<<it->second<<" ";
   }
}