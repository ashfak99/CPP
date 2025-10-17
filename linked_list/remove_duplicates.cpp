#include<iostream>
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

void insert_At_Tail(Node* &head,int data)
{
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

 void duplicateHelp (Node* head)
{
    if (head==NULL || head->next==NULL)
    {
        return;
    }
    if (head->data==head->next->data)
    {
        Node* deleteNode = head->next;
        head->next=head->next->next;
        delete deleteNode;
        duplicateHelp(head);
    }
    else{
    duplicateHelp(head->next); 
}}

Node* deleteDuplicate(Node* head)
{
    duplicateHelp(head);
    return head;
}

Node* deleteElement(Node* head, int val)
{
    if (head==NULL)
    {
        return head;
    }
    
    while (head!=NULL && head->data==val)
    {
        Node* deleteNode = head;
        head=head->next;
        delete deleteNode;
    }

    if (head == NULL) {
        return head;
    }

    Node* current = head;
    while(current->next!=NULL)
    {
        if (current->next->data==val)
        {
        Node* deleteNode = current->next;
        current->next=deleteNode->next;
        delete deleteNode;
        }
        else{
                current=current->next;
        }
    }
    return head;
}

int main(int argc, char const *argv[])
{
    Node *head = NULL;
    insert_At_Tail(head,7);    
    insert_At_Tail(head,7);    
    insert_At_Tail(head,7);    
    insert_At_Tail(head,7);    
    insert_At_Tail(head,7);    
    insert_At_Tail(head,7);
    insert_At_Tail(head,7);

    display(head);
    cout<<endl;
    Node* temp = deleteElement(head,7);
    display(temp);
    cout<<"Aadi Sab Khatam ho gya!!";
    return 0;
}
