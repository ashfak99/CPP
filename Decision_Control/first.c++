#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int cy,jy,x,bonus;
    cout<<"Enter the Current Year : ";
    cin>>cy;
    cout<<"\nEnter the Joining Year : ";
    cin>>jy;
    x=cy-jy;
    if (x>=3)
    {
        bonus=2500;
        cout<<"Bonus : "<<bonus;
    }
    return 0;
}
