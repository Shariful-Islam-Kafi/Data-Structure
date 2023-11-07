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
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    Node*tmp=head;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newNode;
}
int main()
{
    int val;
    int cnt[101]={0};
    Node *head=NULL;
    while(true)
    {
        cin>>val;
        cnt[val]++;
        if(val==-1)
        {
            break;
        }
        insert_at_tail(head,val);
    }
    for(int i=1;i<=100;i++)
    {
        if(cnt[i]>1)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;


    return 0;
}

