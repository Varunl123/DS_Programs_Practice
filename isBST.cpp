// isBST

bool isBSTUntil(Node* root,int min,int max){
    if(root==NULL)
        return true;
    if(root->data<min || root->data>max)
        return false;
    return isBSTUntil(root->left,min,root->data) && isBSTUntil(root->right,root->data,max);
}
bool isBST(Node* root) {
    // Your code here
    if(root==NULL)
        return true;
    return isBSTUntil(root,INT_MIN,INT_MAX);
}