#include<iostream>
using namespace std;
int N=0;
void insert_Element(int array[])
{
    int data,pos;
    cout<<"\nPlease Enter The Element : ";
    cin>>data;
    cout<<"\nPlease Enter The Index : ";
    cin>>pos;
    int i=N;
    while (i>=pos)
    {
        array[i+1]=array[i];
        i=i-1;
    }
    array[pos]=data;
    N=N+1;
}

void delete_element(int array[])
{
    int pos;
    cout<<"\nPlease Enter The Index For Delete Element : ";
    cin>>pos;
    int data=array[pos];
    int i=pos;
    while (i<=N-1)
    {
        array[i]=array[i+1];
        i=i+1;
    }
    N=N-1;
    cout<<data<<" is Deleted ";
}

void display(int array[])
{
    for (int i = 0; i < N; i++)
    {
        cout<<array[i]<<"\t";
    }
}

int main(int argc, char const *argv[])
{
    int array[10];
    while (1)
    {
        int choice;
        cout<<"\n1.Insert Element\n2.Delete Element\n3.Display\n4.Exit\n";
        cout<<"Please Choose Any One : ";
        cin>>choice;
        switch (choice)
        {
        case 1:
           insert_Element(array);
           break;
        case 2:
           delete_element(array);
           break;
        case 3:
           display(array);
           break;
        case 4:
           exit(0);
           break;
        default:
            cout<<"!!!!!WRONG CHOICE!!!!!";
            break;
        }
    }
    
    return 0;
}
