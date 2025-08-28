#include<iostream>
//#include "Myheader_file/class_object_.h"
#include "class_oops_.h"
using namespace std;

//Global Variable
const int size=10;

// //First Class
// class item
// {
// private:
//     int number;
//     float cost;
// public:
//     void getdata(int a, float b);
//     void putdata(void)
//     {
//         cout<<"Number : "<<number<<endl;
//         cout<<"Cost : "<<cost<<endl;
//     }
// };

// void item::getdata(int a, float b)
// {
//     number=a;
//     cost=b;
// }

//Second Class-Nested Member Function
class set
{
private:
    int m,n;
public:
    void input(void);
    void display(void);
    int largest(void);
};

int set::largest(void)
{
    if (m>n)
    {
        return m;
    }
    else{
        return n;
    }
}

void set::input(void)
{
    cout<<"Enter Two Number : ";
    cin>>m>>n;
}

void set::display(void)
{
    cout<<"\nLargest Value = "<<largest()<<endl;
}

//Array in Class
class array
{
private:
    int itemCode[size];
    float itemPrice[size];
    int count;
public:
    void CNT(void){count=0;}
    void getitem(void);
    void displaySum(void);
    void remove(void);
    void displayItem(void);
};
void array::getitem(void)
{
    cout<<"Enter Item Code : ";
    cin>>itemCode[count];
    cout<<"Enter Item Cost : ";
    cin>>itemPrice[count];
    count++;
}
void array::displaySum(void)
{
    float sum=0;
    for (int i = 0; i < count; i++)
    {
        sum=sum+itemPrice[i];
    }
    cout<<"Total Value = "<<sum<<endl;
}
void array::remove(void)
{
    int a;
    cout<<"Enter Item Code: ";
    cin>>a;
    for (int i = 0; i < count; i++)
    {
        if (itemCode[i]==a)
        {
            itemPrice[i]=0;
        }
    }
}
void array::displayItem(void)
{
    cout<<"\nCode\tPrice";
    for (int i = 0; i < count; i++)
    {
        cout<<"\n"<<itemCode[i]<<"\t"<<itemPrice[i];
    }
    cout<<endl;
}

//MAIN FUNCTION
// int main(int argc, char const *argv[])
// {
//     array order;
//     order.CNT();
//     int x;
//    do
//    {
//     cout<<"\n\n\nEnter your choice : "<<endl;
//     cout<<"\n1. Add an item\n2. Display Total Value\n3. Delete an item\n4.Display all item\n5.Quit"<<endl;

//     cout<<"What is your choice : ";
//     cin>>x;

//     switch (x)
//     {
//     case 1:
//         order.getitem();
//         break;
//     case 2:
//         order.displaySum();
//         break;
//     case 3:
//         order.remove();
//         break;
//     case 4:
//         order.displayItem();
//         break;
//     case 5:
//         break;
//     default:
//         cout<<"!!!!!!!!Wrong Choice!!!!!!!!";
//         break; 
//     }
//    } while (x!=5);
   
//     return 0;
// }

int item::count;

int main(int argc, char const *argv[])
{
    bank ashfak;
    ashfak.initial_value();
    ashfak.display();
    ashfak.deposit()
    return 0;
}
