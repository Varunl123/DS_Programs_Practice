// Maximum path sum in a binary tree 
int calcMaxPathSum(struct Node *root,int &result){
    if(root==NULL)
        return 0;
    if(root->left==NULL && root->right==NULL)
        return root->data;
    int leftsum=calcMaxPathSum(root->left,result);
    int rightsum=calcMaxPathSum(root->right,result);
    result=max(result,leftsum+rightsum+root->data);
    return root->data+max(leftsum,rightsum);
}
int maxPathSum(struct Node *root)
{
//add code here.
    int result=INT_MIN;
    calcMaxPathSum(root,result);
    return result;
}
