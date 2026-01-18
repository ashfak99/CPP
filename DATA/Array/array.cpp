#include<bits/stdc++.h>
using namespace std;

void insertAtEnd(int *arr, int &size)
{
    int data;
    cout<<"\nPlease Enter The Element : ";
    cin>>data;

    arr[size]=data;
    size++;
}

void insertAtBeg(int *arr, int &size)
{
    int data;
    cout<<"\nPlease Enter The Element : ";
    cin>>data;

    for (int i=size; i>0; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=data;
    size++;
}

void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<"\n"<<arr[i]<<"\t";
    }
}

int main(int argc, char const *argv[])
{
    int array[100];
    array[0]=1;
    array[1]=2;
    
    int size=2;

    insertAtEnd(array,size);

    printArray(array,size);
    insertAtBeg(array,size);
    printArray(array,size);
    
    return 0;
}