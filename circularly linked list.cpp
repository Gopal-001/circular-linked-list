#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;
}*head,*tail,*newnode;
int main()
{
    head=0;
    int choice=1;
    while(choice)
    {
        newnode=new Node();
        cout<<"enter data\n";
        cin>>newnode->data;
        newnode->next=0;
        if(head==0)
        {
            head=newnode;
            tail=newnode;
            tail->next=head;
        }
        else
        {
            tail->next=newnode;
            //newnode->next=head;
            tail=newnode;
            tail->next=head;
        }
        cout<<"enter your choice\n";
        cout<<"1 for continue or 0 for exit\n";
        cin>>choice;    
    }
    tail=head;
    while(tail->next!=head)
    {
        cout<<tail->data<<" ";
        tail=tail->next;
    }
    // as last node didn't print we have to print it too.
    cout<<tail->data;
    
}
