#include<bits/stdc++.h>

using namespace std;

class Node{
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

void insert_At_Tail(Node* &head)
{
    int data;
    cout<<"Enter the Value of Data : ";
    cin>>data;
    Node *newNode = new Node(data);
    if (head==NULL)
    {
        head=newNode;
    }
    else
    {
        Node *temp=head;
        while (temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newNode;
    }
}

void delete_At_Tail(Node* &head)
{
    if (head==NULL)
    {
        cout<<"LinkedList is Empty !!!";
    }
    else
    {
        Node *temp=head;
        while (temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        Node *last=temp->next;
        int val=last->data;
        temp->next=NULL;
        delete last;
        cout<<val<<" is Removed\n";
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
        cout<<"\nPlease Choose Any One Option"<<endl;
        cout<<"1.Insert At Tail\n2. Delete From Tail\n3. Display\n4. Exit   :   ";
        cin>>choice;

        switch (choice)
        {
        case 1:
            insert_At_Tail(head);
            break;
        case 2:
            delete_At_Tail(head);
            break;
        case 3:
            display(head);
            break;
        case 4:
            exit(0);
        default:
            cout<<"Wrong Choice !!!!!!";
            break;
        }
    }
    
    return 0;
}
