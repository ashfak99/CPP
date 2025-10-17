#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int target)
{
    int mid, start = 0, end = size - 1,flag=1;
    for (mid=(start+end)/2; start<=end; mid=(start+end)/2)
    {
        if (arr[mid]==target)
        {
            flag=0;
            return arr[mid];
        }
        if (arr[mid]<target)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        
    }
    if (flag)
    {
        return -1;
    }
    
    
}

int main(int argc, char const *argv[])
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target=50;
    int result=binarySearch(arr,size,target);
    if (result!=-1)
    {
        cout<<"Element found: "<<result<<endl;
    }
    else
    {
        cout<<"Element not found"<<endl;
    }
    return 0;
}
