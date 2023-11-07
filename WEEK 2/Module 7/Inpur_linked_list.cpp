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
void display(Node *head)
{
    Node *tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl<<endl;
}
void print_recursive(Node *n)
{
    if(n==NULL)
    {
        return;
    }
    cout<<n->val<<" ";
    print_recursive(n->next);
}
void print_reverse(Node *n)
{
    if(n==NULL) return;
    print_reverse(n->next);
    cout<<n->val<<" ";
}
int main()
{
    Node *head=NULL;
    Node *tail=NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert_tail(head,tail,val);
    }
    display(head);
    print_recursive(head);
    cout<<endl<<endl;
    print_reverse(head);
    cout<<endl;

    return 0;
}
