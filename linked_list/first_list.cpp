#include<iostream>
using namespace std;
class list
{
protected:
    struct node
    {
        int info;
        struct node *next;
    };
    typedef struct node *NODEPTR;
    NODEPTR listptr;
public:
    list(/* args */);
    ~list();
    int emptylist();
    void push(int newvalue);
    void pop();
};

list::list(/* args */)
{
    listptr=0;
}

list::~list()
{
    NODEPTR p,q;
    if (emptylist())
    {
        return 0;
    }
    for (p=listptr,q=p->next;p!=0;p=q,q=p->next)
    {
        delete p;
    }
}

int list::emptylist()
{
    return(listptr==0);
}

void list :: push(int newvalue)
{
    NODEPTR p;
    p=new node;
    p->info=newvalue;
    p->next=listptr;
    listptr=p;
}

int list :: pop()
{
    NODEPTR p;
    int x;
    if(emptylist())
      error("ERROR : the list is empty");
    p=listptr;
    listptr=p->next;
    x=p->info;
    delete p;
    return x;
}