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
void insert_at_tail(Node *&head,Node *&tail,int val)
{
    Node *newNode = new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        cout<<endl<<"Inserted At Head"<<endl<<endl;
        return;
    }
    tail->next=newNode;
    tail=newNode;
    cout<<endl<<"Inserted At Tail"<<endl<<endl;
}
void insert_at_any_position(Node *head,int pos,int val)
{
    Node *newNode=new Node(val);
    Node *tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
    cout<<endl<<"Inserted At Position "<<pos<<endl<<endl;
}
void insert_at_head(Node *&head,int val)
{
    Node *newNode=new Node(val);
    newNode->next=head;
    head=newNode;
    cout<<endl<<"Inserted At Head"<<endl<<endl;
}
void delete_from_position(Node *head,int pos)
{
    Node *tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;

    }
    Node *deleteNode=tmp->next;
    tmp->next=tmp->next->next;
    delete deleteNode;
    cout<<endl<<"Deleted Posistion "<<pos<<endl<<endl;
}
void delete_head(Node *&head)
{
    if(head==NULL)
    {
        cout<<endl<<"Head is not available"<<endl<<endl;
        return;
    }
    Node *deleteNode=head;
    head=head->next;
    delete deleteNode;
    cout<<endl<<"Deleted Head"<<endl<<endl;
}
void display(Node *head)
{
    cout<<"Linked List: ";
    Node *tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val;
        if(tmp->next!=NULL)
        {
            cout<<" -> ";
        }
        tmp=tmp->next;
    }
    cout<<endl<<endl;
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
    Node *head=NULL;
    Node *tail=NULL;
    while(true)
    {

        cout<<"Option 1: Insert At Tail"<<endl;
        cout<<"Option 2: Display"<<endl;
        cout<<"Option 3: Insert At Any Position"<<endl;
        cout<<"Option 4: Insert At Head"<<endl;
        cout<<"Option 5: Delete From Position"<<endl;
        cout<<"Option 6: Delete Head"<<endl;
        cout<<"Option 7: Terminate"<<endl;
        cout<<endl<<endl;
        int op;
        cout<<"Enter Option: ";
            cin>>op;
        if(op==1)
        {
            cout<<"Please Enter the value: ";
            int val;
            cin>>val;
            insert_at_tail(head,tail,val);
        }
        else if(op==2)
        {
            display(head);
        }
        else if(op==3)
        {
            int pos,val;
            cout<<"Enter Position: ";
            cin>>pos;
            if(pos>size(head))
            {
                cout<<endl<<"Invalid Index"<<endl<<endl;
            }
            else
            {
                cout<<"Enter Value: ";
                cin>>val;
                if(pos==0)
                {
                    insert_at_head(head,val);
                }
                else
                {
                    insert_at_any_position(head,pos,val);
                }
            }

        }
        else if(op==4)
        {
            cout<<"Enter Value: ";
            int val;
            cin>>val;
            insert_at_head(head,val);
        }
        else if(op==5)
        {
            cout<<"Enter Position: ";
            int pos;
            cin>>pos;
            if(pos>=size(head))
            {
                cout<<endl<<"Invalid Index"<<endl<<endl;
            }
            else
            {
                if(pos==0)
                {
                delete_head(head);
                }
                else
                {
                    delete_from_position(head,pos);
                }
            }


        }
        else if(op==6)
        {
            delete_head(head);
        }
        else if(op==7)
        {
            break;
        }
    }


    return 0;
}



