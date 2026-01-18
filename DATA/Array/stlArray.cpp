#include<iostream>
#include<array>
using namespace std;

int main(int argc, char const *argv[])
{
    array<int,10> arr={1,2,3,4,5,6,7,8,9,10};
    array<int,10> arr2={11,12,13,14,15,16,17,18,19,20};

    // arr.fill(1);

    // arr2.fill(2);

    cout<<"Array 1: "<<endl;
    for (auto i : arr)
    {
        cout<<i<<"\t";
    }
    cout<<"\nArray 2: "<<endl;

    for (auto i : arr2)
    {
        cout<<i<<"\t";
    }
    cout<<endl;
    
    cout<<arr.front()<<"\t"<<arr.back()<<endl;

    arr.swap(arr2);

    cout<<"\nArray After Swaping \n";
    cout<<"Array 1: "<<endl;
    for (auto i : arr)
    {
        cout<<i<<"\t";
    }
    cout<<"\nArray 2: "<<endl;
    for (auto i : arr2)
    {
        cout<<i<<"\t";
    }
    cout<<endl;

    return 0;
}
