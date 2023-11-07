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
int size(Node *head)
{
    Node *tmp=head;
    int count=0;
    while(tmp!=NULL)
    {
        count++;
        tmp=tmp->next;
    }
    return count;
}
void find_mid(Node *head)
{
    Node *tmp=head;
    int length=size(head);
    int sz=(length+1)/2;
    for(int i=0;i<sz-1;i++)
    {
        tmp=tmp->next;
    }
    if(length%2==0)
    {
        cout<<tmp->val<<" "<<tmp->next->val<<endl;
    }
    else
    {
        cout<<tmp->val<<endl;
    }
}
int main()
{
    int val;
    Node *head=NULL;
    Node *tail=NULL;
    while(true)
    {
        cin>>val;
        if(val==-1) break;
        insert_tail(head,tail,val);
    }
    for(Node *i=head;i->next!=NULL;i=i->next)
    {
        for(Node *j=i->next;j!=NULL;j=j->next)
        {
            if(i->val < j->val)
            {
                swap(i->val,j->val);
            }
        }
    }
    find_mid(head);

    return 0;
}



