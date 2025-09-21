#include<iostream>
using namespace std;

class DLLNODE
{
    public:
    DLLNODE* LLINK;
    int info;
    DLLNODE* RLINK;

    DLLNODE(int data)
    {
        info=data;
        RLINK=NULL;
        LLINK=NULL;
    }
};

int main(int argc, char const *argv[])
{
    for (int i = 0; i < 5; i++)
    {
        DLLNODE list(i);
        cout<<list.LLINK<<"\t"<<list.info<<"\t"<<list.RLINK<<endl;
    }
    
    return 0;
}


