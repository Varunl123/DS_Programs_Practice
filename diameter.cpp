// diameter of a binary tree
int max(int l,int r){
    return l>r?l:r;
}
int printDiameter(Node *node,int *height){
    if(node==NULL){
        *height=0;
        return 0;
    }
    if(!node->left && !node->right)
    {
        *height=1;
        return 1;
    }
    int lh=0,rh=0;
    int leftDiameter=printDiameter(node->left,&lh);
    int rightDiameter=printDiameter(node->right,&rh);
    *height=max(lh,rh)+1;
    return max(max(leftDiameter,rightDiameter),lh+rh+1);
}
int diameter(Node* node)
{
   // Your code here
   int height=0;
   return printDiameter(node,&height);
  // printDiameter(node,&height);
   //cout<<height<<endl;
}ss