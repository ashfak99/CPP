#include<bits/stdc++.h>
using namespace std;

class Node { 
    public:
       int data;
       Node *next;

    Node()
    {
        data=0;
        next=NULL;
    }   
    Node(int item)
    {
        data=item;
        next=NULL;
    }
};

void insert_at_head(Node* &head)
{
    int data;
    cout<<"Please Enter the Data : ";
    cin>>data;
    Node *newNode = new Node(data);
    if(head==NULL)
    {
        head=newNode;
    }
    else{
        newNode->next=head;
        head=newNode;
    }
}

void delete_from_head(Node* &head)
{
    if (head==NULL)
    {
        cout<<"LinkedList is Empty !!!";
    }
    else
    {
        Node *temp=head;
        int val=temp->data;
        head=temp->next;
        cout<<val<<" is Removed"<<endl;
    }
}

void display(Node *head)
{
    if (head==NULL)
    {
        cout<<"Linked List is Empty !!!!";
    }
    else{
        Node *temp=head;
        while (temp!=NULL)
        {
            cout<<temp->data<<"\t";
            temp=temp->next;
        }
    }
    
}

int main(int argc, char const *argv[])
{
    Node *head=NULL;
    while (1)
    {
        int choice;
        cout<<"\nPlease Choose Any One Options"<<endl;
        cout<<"1. Insert At Beg\n2. Display\n3. Delete At Beg    : ";
        cin>>choice;

        switch (choice)
        {
        case 1:
            insert_at_head(head);
            break;
        case 2:
            display(head);
            break;
        case 3:
            delete_from_head(head);
            break;
        default:
            break;
        }
    }
    
    return 0;
}



