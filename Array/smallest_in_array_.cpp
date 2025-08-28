#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[]={5,10,3,1,-10,22,47};
    int size =7;
    int smallest = __INT_MAX__;
    int largest = INTMAX_MIN;
    for (int i = 0; i < size; i++)
    {
       smallest=min(arr[i],smallest);
       largest=max(arr[i],largest);
    }
    cout<<"Smallest Number = "<<smallest<<endl;
    cout<<"Largest Number = "<<largest<<endl;
    return 0;
}
