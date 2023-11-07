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
void insert_at_tail(Node *&head,int val)
{
    Node *newNode=new Node(val);
    Node *tmp=head;
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newNode;
}
void display(Node *head)
{
    Node *tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
}
void insert_at_any_position(Node *head,int pos,int v)
{
    Node *newNode=new Node(v);
    Node *tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
        if(tmp==NULL)
        {
            cout<<"Invalid"<<endl;
            return;
        }

    }
    newNode->next=tmp->next;
    tmp->next=newNode;

}
int main()
{
    int val;
    Node *head=NULL;
    while(true)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert_at_tail(head,val);
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int pos,v;
        cin>>pos>>v;
        insert_at_any_position(head,pos,v);
        display(head);
    }


    return 0;
}
