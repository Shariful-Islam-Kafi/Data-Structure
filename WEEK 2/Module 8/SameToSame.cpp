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
    Node *head1=NULL;
    Node *tail1=NULL;
    Node *head2=NULL;
    Node *tail2=NULL;
    while(true)
    {
        cin>>val;
        if(val==-1) break;
        insert_tail(head1,tail1,val);
    }
    while(true)
    {
        cin>>val;
        if(val==-1) break;
        insert_tail(head2,tail2,val);
    }
    if(size(head1)!=size(head2))
    {
        cout<<"NO"<<endl;
        return 0;
    }
    else
    {
        for(Node *i=head1,*j=head2;i!=NULL,j!=NULL;i=i->next,j=j->next)
        {
            if(i->val != j->val)
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
        cout<<"YES"<<endl;
    }
    return 0;
}




