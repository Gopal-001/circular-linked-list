#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
}*head,*tail,*newnode;
int main()
{
    head=0;
    int choice=1;
    while(choice)
    {
        newnode=(node *)malloc(sizeof(node));
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
            newnode->next=head;
            tail=newnode;
            // tail->next=head;
        }
        cout<<"enter your choice\n";
        cin>>choice;    
    }
    tail=head;
    while(tail->next!=head)
    {
        cout<<tail->data<<" ";
        tail=tail->next;
    }
    cout<<tail->data;
    
}