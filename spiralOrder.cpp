// print spiral order of binary tree
void printSpiralOrder(Node *root,stack<Node*> &s1,stack<Node*> &s2){
    if(root==NULL)
        return ;
    s1.push(root);
    Node *temp;
    while(!s1.empty() || !s2.empty()){
        while(!s1.empty())
        {
            temp=s1.top();
            s1.pop();
            cout<<temp->data<<" ";
            if(temp->right!=NULL)
                s2.push(temp->right);
            if(temp->left!=NULL)
                s2.push(temp->left);
            
        }
        while(!s2.empty()){
            temp=s2.top();
            s2.pop();
            cout<<temp->data<<" ";
            if(temp->left!=NULL)
                s1.push(temp->left);
            if(temp->right!=NULL)
                s1.push(temp->right);
        }
    }
}
void printSpiral(Node *root)
{
    //Your code here
    stack<Node*> s1,s2;
    printSpiralOrder(root,s1,s2);
}