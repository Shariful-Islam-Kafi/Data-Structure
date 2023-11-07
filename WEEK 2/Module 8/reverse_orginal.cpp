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
    cout<<endl;
}
void print_reverse(Node *head)
{
    //base case
    if(head==NULL)  return;
    print_reverse(head->next);
    cout<<head->val<<" ";
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
    print_reverse(head);
    cout<<endl;
    display(head);
    return 0;
}




