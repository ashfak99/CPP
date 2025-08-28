#include<iostream>
using namespace std;

//Modify Function
void modify(int array[10])
{
    for (int i = 0; i <10; i++)
    {
        array[i]=array[i]*3;
    }
}

int main(int argc, char const *argv[])
{
    int arr[10];
    cout<<"Enter the Element of Array : ";
    for (int i = 0; i < 10; i++)
    {
        cin>>arr[i];
    }
    modify(arr);
    cout<<"\nAfter Modify  "<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<"\t";
    }
    
    return 0;
}
