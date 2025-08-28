#include<iostream>
using namespace std;

class Node{
    public:
       int info;
       Node* next;

       Node(int data){
        info=data;
        next=NULL;
       }
};
void display(Node* head)
{
    Node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->info<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

void insertAtHead(Node* &head, int val){
    Node* new_node = new Node(val);
    new_node->next=head;
    head=new_node;
}

void insertAtTail(Node* &head, int val)
{
    Node* new_node = new Node(val);
    Node* temp=head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=new_node;
}

void insertAtPosition(Node* &head, int val, int position)
{
    if (position==0)
    {
        insertAtHead(head,val);
        return;
    }
    Node* new_node = new Node(val);
    Node* temp=head;
    int current_pos=0;
    while (current_pos!=position-1)
    {
        temp=temp->next;
        current_pos++;
    }
    new_node->next=temp->next;
    temp->next=new_node;
}

int main(int argc, char const *argv[])
{
    Node* n=new Node(2);
    insertAtHead(n,1);
    display(n);
    insertAtTail(n,3);
    display(n);
    insertAtTail(n,4);
    insertAtPosition(n,10,2);
    display(n);
    return 0;
}
