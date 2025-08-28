#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[]={24,34,12,44,56,17};
    int i,*j;
    j=&arr[0];
    for ( i = 0; i <= 5 ; i++)
    {
        cout<<"\n Address : "<<j;
        cout<<"\t Element : "<<*j;
        j++;
    }
    
    return 0;
}
