#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
void insert_head(Node *&head,Node *&tail,int val)
{
    Node *newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    newNode->next=head;
    head=newNode;
}
void insert_tail(Node *&head,Node *&tail,int val)
{
    Node *newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}

int main()
{
    Node *head=NULL;
    Node *tail=NULL;
    int q;
    cin>>q;
    while(q--)
    {
        int x,v;
        cin>>x>>v;
        if(x==0)
        {
            insert_head(head,tail,v);
            cout<<head->val<<" "<<tail->val<<endl;
        }
        else
        {
            insert_tail(head,tail,v);
            cout<<head->val<<" "<<tail->val<<endl;
        }
    }

    return 0;
}





