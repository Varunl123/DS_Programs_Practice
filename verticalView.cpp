/*vertical order*/
void verticalOrderUntil(Node *root,int hd,map<int,vector<int>> &m){
    if(root==NULL)
        return ;
    m[hd].push_back(root->data);
    verticalOrderUntil(root->left,hd-1,m);
    verticalOrderUntil(root->right,hd+1,m);
}
void verticalOrder(Node *root)
{
    if(root==NULL)
        return ;
    map<int,vector<int>> m;
    vector<int>::iterator itr;
    verticalOrderUntil(root,0,m);
    map<int,vector<int>>::iterator it;
    for(it=m.begin();it!=m.end();it++){
        for(int i=0;i<it->second.size();i++){
            cout<<it->second[i]<<" ";
        }
    }
    //Your code here
}