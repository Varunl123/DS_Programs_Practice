// height balanced

bool isHeightBalanced(Node *root,int *height){
    if(root==NULL)
    {
        *height=0;
        return true;
    }
    if(!root->left && !root->right){
        *height=1;
        return true;
    }
    int lh=0,rh=0;
    bool isLeftBalanced=isHeightBalanced(root->left,&lh);
    bool isRightBalanced=isHeightBalanced(root->right,&rh);
    if(isLeftBalanced && isRightBalanced)
    {
        *height=max(lh,rh)+1;
        if(abs(lh-rh)<2)
            return true;
        else
            return false;
    }
    return false;
    
    
}
bool isBalanced(Node *root)
{
    int height=0;
    return isHeightBalanced(root,&height);
}
