#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[10]={1,2,3,4,5};
    int i,k,N=5,D;
    cout<<"\nArray Before Deletion  "<<endl;
    for ( i = 0; i < N; i++)
    {
        cout<<"arr["<<i<<"] = "<<arr[i]<<endl;
    }
    cout<<"\nEnter the index location from element is to be Deleted : ";
    cin>>k;
    D=arr[k];
    for ( i = k; i <= N-2; i++)
    {
        arr[i]=arr[i+1];
    }
    N=N-1;
    cout<<"\nThe Element "<<D<<" is Deleted\n";
    cout<<"\nArray After Deletion "<<endl;
    for ( i = 0; i < N; i++)
    {
        cout<<"arr["<<i<<"] = "<<arr[i]<<endl;
    }
    
    return 0;
}
