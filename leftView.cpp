/* LeftView of a binary tree */

//Solution 1: Using boolean array for storing levels 

void leftViewUntil(Node *root,bool *leftArray,int index){
    if(root==NULL)
        return ;
    if(leftArray[index]==false){
        leftArray[index]=true;
        cout<<root->data<<" ";
    }
    leftViewUntil(root->left,leftArray,index+1);
    leftViewUntil(root->right,leftArray,index+1);
}
void leftView(Node *root)
{
   // Your code here
   int index=0;
   bool leftArray[100]={false};
   leftViewUntil(root,leftArray,index);
    
}

// solution 2: using single max variable as level 

void leftViewUntil(Node *root,int &maxLevel,int level){
    if(root==NULL)
        return ;
    if(level>maxLevel)
    {
        maxLevel=level;
        cout<<root->data<<" ";
    }
    leftViewUntil(root->left,maxLevel,level+1);
    leftViewUntil(root->right,maxLevel,level+1);
}
void leftView(Node *root)
{
   // Your code here
   if(root==NULL)
     return;
   int maxLevel=-1;
   leftViewUntil(root,maxLevel,0);
   
    
}