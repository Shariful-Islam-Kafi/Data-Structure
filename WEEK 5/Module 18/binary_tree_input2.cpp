#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
Node* input_tree()
{
    int val;
    cin>>val;
    Node *root;
    if(val==-1)     root=NULL;
    else    root=new Node(val);
    queue<Node*> q;
    if(root)    q.push(root);
    while(!q.empty())
    {
        Node* p=q.front();
        q.pop();
        int l,r;
        cin>>l>>r;
        Node* myLeft;
        Node* myRight;
        if(l==-1)
        {
            myLeft=NULL;
        }
        else
        {
            myLeft=new Node(l);
        }
        if(r==-1)
        {
            myRight=NULL;

        }
        else
        {
            myRight=new Node(r);
        }
        p->left=myLeft;
        p->right=myRight;

        if(p->left)     q.push(p->left);
        if(p->right)    q.push(p->right);
    }
    return root;
}
void preorder(Node* root)
{
    //base case
    if(root==NULL)
    {
        return;
    }
    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node* root)
{
    //base case
    if(root==NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->val<<" ";
}
void inorder(Node* root)
{
    //base case
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}
void level_order(Node* root)
{
    if(root==NULL)
    {
        cout<<"Tree nai"<<endl;
        return;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        Node* p=q.front();
        q.pop();
        cout<<p->val<<" ";

        if(p->left)     q.push(p->left);
        if(p->right)    q.push(p->right);
    }
}
int main()
{
    Node* root=input_tree();
    cout<<"Preorder Traversal: "<<endl;
    preorder(root);
    cout<<endl;
    cout<<"Postorder Traversal: "<<endl;
    postorder(root);
    cout<<endl;
    cout<<"Inorder Traversal: "<<endl;
    inorder(root);
    cout<<endl;
    cout<<"Level Order Traversal: "<<endl;
    level_order(root);
    cout<<endl;
    return 0;
}
