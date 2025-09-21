#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int info)
    {
        data=info;
        next=NULL;
    }
};

class List{
    Node* head;
  public:
    List()
    {
        head=NULL;
    }

    void push_front()
    {
        int val;
        cout<<"Enter the Value Item : ";
        cin>>val;
        Node* newNode = new Node(val);
        if (head==NULL)
        {
            head=newNode;
            return;
        }
        newNode->next=head;
        head=newNode;
    }

    void push_end()
    {
        int val;
        cout<<"Enter the Value Item : ";
        cin>>val;
        Node* newNode = new Node(val);
        if (head==NULL)
        {
            head=newNode;
            return;
        }
        Node* temp=head;
        while (temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newNode;
    }

    void delete_front()
    {
        if (head==NULL)
        {
            cout<<"\nList is Empty"<<endl;
            return;
        }
        Node* temp=head;
        head=head->next;
        cout<<"\n"<<temp->data<<" is deleted"<<endl;
        delete temp;
    }

    void delete_end()
    {
        if (head==NULL)
        {
            cout<<"\nList is Empty"<<endl;
            return;
        }

         if (head->next == NULL)
         {
            delete head;
            head = NULL;
            return;
        }

        Node* temp = head;
        while (temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        Node* last = temp->next;
        temp->next=NULL;
        cout<<last->data<<" is deleted"<<endl;
        delete last;
    }

    void display()
    {
        Node* temp=head;
        while (temp!=NULL)
        {
           cout<<temp->data<<"\t";
           temp=temp->next;
        }
    }
};

int main(int argc, char const *argv[])
{
    List li;
    int choice;
    while (1)
    {
        cout<<"\nChoose one options  "<<endl;
        cout<<"1.Insert Front\n2.Insert End\n3.Delete Front\n4.Delete End\n5.Display\n6.Exit  :   ";
        cin>>choice;
        switch (choice)
        {
           case 1:
            li.push_front();
            break;

           case 2:
            li.push_end();
            break;

           case 3:
            li.delete_front();
            break;
    
           case 4:
            li.delete_end();
            break;
          case 5:
            li.display();
            break;
    
          case 6:
            exit(1);
          default:
            cout<<"Wrong Choice!!!!!";
            break;
        }
    }
    
    return 0;
}
