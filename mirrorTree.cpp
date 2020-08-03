// mirror Tree 
bool isSymmetricArray(struct Node *leftNode,struct Node *rightNode){
    if((leftNode!=NULL && rightNode==NULL) || (rightNode!=NULL && leftNode==NULL))
        return false;
    if(leftNode==NULL && rightNode==NULL)
        return true;
    return (leftNode->key==rightNode->key) && isSymmetricArray(leftNode->left,rightNode->right) && isSymmetricArray(leftNode->right,rightNode->left);
}
bool isSymmetric(struct Node* root)
{
    if(root==NULL)
        return true;
    return  isSymmetricArray(root->left,root->right);
}