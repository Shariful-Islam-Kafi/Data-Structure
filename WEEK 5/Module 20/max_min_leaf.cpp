#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
vector<int> v;
Node* input_tree()
{
    int val;
    cin>>val;
    Node* root;
    if(val==-1) root=NULL;
    else    root=new Node(val);
    queue<Node*> q;
    if(root)    q.push(root);
    while(!q.empty())
    {
        Node *pr=q.front();
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
        pr->left=myLeft;
        pr->right=myRight;

        if(pr->left)    q.push(pr->left);
        if(pr->right)   q.push(pr->right);
    }
    return root;
}

void count_leaf(Node* root)
{
    if(root==NULL)  return;
    if(root->left==NULL && root->right==NULL)
    {
        v.push_back(root->val);
    }
    count_leaf(root->left);
    count_leaf(root->right);
}
int main()
{
    Node* root=input_tree();
    count_leaf(root);
    int mn=INT_MAX;
    int mx=INT_MIN;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>=mx)
        {
            mx=v[i];
        }
        if(v[i]<=mn)
        {
            mn=v[i];
        }
    }
    cout<<mx<<" "<<mn<<endl;
    return 0;
}

