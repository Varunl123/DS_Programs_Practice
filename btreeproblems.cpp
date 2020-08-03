#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *left;
    struct node *right;
    node(int key){
        left=NULL;
        right=NULL;
        data=key;
    }
};
void levelOrder(struct node *root){
    if(root==NULL)  
        return;
    queue<node*> q;
    int size=0;
    q.push(root);
    struct node *temp;
    while(!q.empty()){
        size=q.size();
        while(size!=0){
            temp=q.front();
            cout<<temp->data<<" ";
            q.pop();
            size--;
            if(temp->left!=NULL)
                q.push(temp->left);
            if(temp->right!=NULL)
                q.push(temp->right);
        }
        cout<<endl;
    }
    
}
int size(struct node *root){
    if(root==NULL)
        return 0;
    return 1+size(root->left)+size(root->right);
}
void inorder(struct node *root){
    if(root==NULL)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(struct node *root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(struct node *root){
    if(root==NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int maximum(struct node *root){
    if(root==NULL)
        return INT_MIN;
    return max(root->data,max(maximum(root->left),maximum(root->right)));
}
int height(struct node *root){
    if(root==NULL)
        return 0;
    return max(height(root->left),height(root->right))+1;
}
void printKthLevel(struct node *root,int level,int k){
    if(root==NULL)
        return;
    if(level==k){
        cout<<root->data<<" ";
        return;
    }
    if(root->left!=NULL)
    {
        printKthLevel(root->left,level+1,k);
    }
    if(root->right!=NULL){
        printKthLevel(root->right,level+1,k);
    }
    
}
void printLeftView(struct node *root,int &maxlevel,int level){
    if(root==NULL)
        return ;
    if(level>maxlevel){
        maxlevel=level;
        cout<<root->data<<" ";
    }
    printLeftView(root->left,maxlevel,level+1);
    printLeftView(root->right,maxlevel,level+1);
}
void printLeftViewIterative(struct node *root){
    if(root==NULL)
        return;
    queue<node*> q;
    q.push(root);
    int size;
    bool test;
    struct node *temp;
    while(!q.empty()){
        size=q.size();
        test=true;
        while(size!=0){
            temp=q.front();
            if(test){
                cout<<temp->data<<" ";
                test=false;
            }   
            if(temp->left!=NULL)
                q.push(temp->left);
            if(temp->right!=NULL)
                q.push(temp->right);
            q.pop();
            size--;
                
        }
    }
}
bool childrenSumProperty(struct node *root){
    if(root==NULL)
        return true;
    if(root->left==NULL && root->right==NULL)
        return true;
    int left=0;
    int right=0;
    if(root->left!=NULL)
         left=root->left->data;
    if(root->right!=NULL)
         right=root->right->data;
    if(root->data!=(left+right))
            return false;
    return childrenSumProperty(root->left) && childrenSumProperty(root->right);
        
}
int checkBalance(struct node *root){
    if(root==NULL)
        return 0;
    int left=checkBalance(root->left);
    int right=checkBalance(root->right);
    if(left==-1 || right==-1)
        return -1;
    if(abs(right-left)>=2)
        return -1;
    return right>left?right+1:left+1;
    
}
node* constructTree(int in[],int pre[],int is,int ie){
    static int preindex=0;
    int inorderIndex;
    if(is>ie)
        return NULL;
    struct node *root=new node(pre[preindex++]);
    for(int i=is;i<=ie;i++){
        if(in[i]==root->data){
            inorderIndex=i;
            break;
        }
    }
    root->left=constructTree(in,pre,is,inorderIndex-1);
    root->right=constructTree(in,pre,inorderIndex+1,ie);
    return root;
}
int main(){
    struct node *node1=new node(1);
    struct node *node2=new node(2);
    struct node *node3=new node(3);
    struct node *node4=new node(4);
    struct node *node5=new node(5);
    struct node *node6=new node(6);
    struct node *node7=new node(7);
    node1->left=node2;
    node1->right=node3;
    node2->left=node4;
    node2->right=node5;
    node3->left=node6;
    node5->right=node7;
    cout<<size(node1)<<endl;
    cout<<maximum(node1)<<endl;
    cout<<"height: "<<height(node1)<<endl;
    int maxlevel=INT_MIN;
    printLeftView(node1,maxlevel,0);
    cout<<endl;
    printLeftViewIterative(node1);
    cout<<endl;
    cout<<childrenSumProperty(node1);
    cout<<endl;
    cout<<checkBalance(node1)<<endl;
    
    
    //construction of constructTree
    int in[]={20,10,40,30,50};
    int pre[]={10,20,30,40,50};
    struct node *root=constructTree(in,pre,0,4);
    preorder(root);
    
    
    
    
    
    
    
}