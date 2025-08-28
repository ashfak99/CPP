#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[10];
    int minimum=INT_MAX;
    int i,*j;
    *j=arr[0];

    cout<<"Enter the element of Array : ";
    for ( i = 0; i < 10; i++)
    {
        cin>>arr[i];
    }
    for ( i = 0; i < 10; i++)
    {
        minimum=min(*j,minimum);
        j++;
    }
    cout<<"\n\nSmallest Element : "<<minimum<<endl;
    return 0;
}
