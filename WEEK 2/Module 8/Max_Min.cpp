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
    Node *mx=head;
    Node *mn=head;
    for(Node *i=head;i!=NULL;i=i->next)
    {
        if(i->val > mx->val)
        {
            mx=i;
        }
        if(i->val < mn->val)
        {
            mn=i;
        }
    }
    cout<<mx->val<<" "<<mn->val<<endl;

    return 0;
}


