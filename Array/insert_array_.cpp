#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[10]={1,2,4,5,6};
    int i,k,N=5,P;
    cout<<"\nArray before Insertion : ";
    for (i = 0; i < N; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"\nEnter the Element to be inserted : ";
    cin>>P;
    cout<<"\nEnter the index number where "<<P<<" inserted : ";
    cin>>k;
    for ( i = N; i >= k; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[k]=P;
    N=N+1;
    cout<<"\nArray After Insertion "<<endl;
    for ( i = 0; i < N; i++)
    {
        cout<<"arr["<<i<<"] = "<<arr[i]<<endl;
    }
    
    return 0;
}
