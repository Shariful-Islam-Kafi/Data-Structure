#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }

};
void insert_tail(Node *&head,Node*&tail,int val)
{
    Node *newNode=new Node(val);
    if(tail==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    newNode->prev=tail;
    tail=tail->next;
}
int size(Node *head)
{
    Node *tmp=head;
    int count =0;
    while(tmp!=NULL)
    {
        count++;
        tmp=tmp->next;
    }
    return count;
}
int main()
{
    Node *head1=NULL;
    Node *head2=NULL;
    Node *tail1=NULL;
    Node *tail2=NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert_tail(head1,tail1,val);
    }
    while(true)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert_tail(head2,tail2,val);
    }
    if(size(head1)!=size(head2))
    {
        cout<<"NO"<<endl;
    }
    else
    {
        Node *tmp1=head1;
        Node *tmp2=head2;
        while(tmp1->next!=NULL)
        {
            if(tmp1->val!=tmp2->val)
            {
                cout<<"NO"<<endl;
                return 0;
            }
            tmp1=tmp1->next;
            tmp2=tmp2->next;
        }
        cout<<"YES"<<endl;
    }
    return 0;
}
