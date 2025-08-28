#include<iostream>
using namespace std;

int linear_Search(int arr[], int size, int target){
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==target)
        {
            return i;
        }
    }
    return -1;
}

int reverse_Array(int arr[],int size){
    int start=0, end=size-1;
    while (start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main(int argc, char const *argv[])
{
    int arr[]={4,2,7,8,1,2,5};
    int size=7;

   // int target=1;
    // cout<<linear_Search(arr,size,target);

    reverse_Array(arr,size);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
