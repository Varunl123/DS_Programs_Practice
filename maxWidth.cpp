//maximum width

int printMaxWidth(Node *root){
    if(root==NULL)
        return 0;
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    Node* temp;
    int count,maxCount=INT_MIN;
    while(!q.empty()){
        count=0;
        while(q.front()!=NULL){
            temp=q.front();
            count++;
            q.pop();
            if(temp->left!=NULL)
                q.push(temp->left);
            if(temp->right!=NULL)
                q.push(temp->right);
        }
        
        q.pop();
        
        if(count>maxCount)
            maxCount=count;
            
        if(!q.empty())
            q.push(NULL);
    }
    return maxCount;
}
int getMaxWidth(Node* root)
{
   // Your code here
  return printMaxWidth(root);

}