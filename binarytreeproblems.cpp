#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *left;
    struct node *right;
    node(int key){
        data=key;
        left=right=NULL;
    }
};
void spiralOrder(struct node *root){
    if(root==NULL)
        return;
    stack<node*> s1;
    stack<node*> s2;
    s1.push(root);
    struct node *temp;
    int size;
    while(!s1.empty() || !s2.empty()){
        while(!s1.empty()){
            temp=s1.top();
            cout<<temp->data<<" ";
            s1.pop();
            if(temp->left!=NULL)
                s2.push(temp->left);
            if(temp->right!=NULL)
                s2.push(temp->right);
        }
        while(!s2.empty()){
            temp=s2.top();
            cout<<temp->data<<" ";
            s2.pop();
            if(temp->right!=NULL)
                s1.push(temp->right);
            if(temp->left!=NULL)
                s1.push(temp->left);
        }
        cout<<endl;
    }
}
void serialize(struct node *root,vector<int> &v){
    if(root==NULL){
        v.push(-1);
        return;
    }    
    v.push(root->data);
    serialize(root->left,v);
    serialize(root->right,v);
}
struct node* deserialize(vector<int> &v){
    static int index=0;
    if(v.size()==index)
        return NULL;
    int temp=v[index++];
    if(temp==-1)
        return NULL;
    struct node *p=new node(temp);
    p->left=deserialize(v);
    p->right=deserialize(v);
    return p;
}
int diameter(struct node *root,int *height){
    if(root==NULL)
        return 0;
    int lh=0
    int rh=0;
    int ld=diameter(root->left,&lh);
    int rd=diameter(root->right,&rh);
    *height=max(lh,rh)+1;
    return max(lh+rh+1,max(ld,rd));
}
struct node* lca(struct node *root,int key1,int key2,bool &v1,bool &v2){
    if(root==NULL)
        return NULL;
    if(root->key==key1){
        v1=true;
        return root;
    }
    if(root->key==key2)
    {
        v2=true;
        return root;
    }
    struct node *leftLCA=lca(root->left,key1,key2);
    struct node *rightLCA=lca(root->right,key1,key2);
    if(leftLCA!=NULL && rightLCA!=NULL)
        return root;
    if(leftLCA!=NULL)
        return leftLCA;
    else
        return rightLCA;
}
bool find(struct node *root,int key){
    if(root==NULL)
        return NULL;
    if(root->data==key)
        return true;
    return (find(root->left,key) || find(root->right,key));
}
node* findLCA(struct node *root,int key1,int key2){
    bool v1=false;
    bool v2=false;
    struct node *lcaNode=lca(root,key1,key2,v1,v2);
    if(v1&&v2 || v1 && find(lcaNode,key2) || v2 && find(lcaNode,key1) )
        return lcaNode;
    return NULL;
}
int main() {
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
    node3->right=node7;
    spiralOrder(node1);
    
    
}