#include<iostream>
using namespace std;
void search__()
{
     int num[25],target,count=0;
    cout<<"Enter the 25 numbers of array : ";
    for (int i = 0; i < 25; i++)
    {
        cin>>num[i];
    }
    cout<<"\nEnter the target Number : ";
    cin>>target;
    for (int i = 0; i < 25; i++)
    {
        if (num[i]==target)
        {
            count++;
        }
    }
    cout<<"\n "<<target<<" is "<<count<<" times present in array "<<endl;
}
int main(int argc, char const *argv[])
{
    int nums[25],count=0,choice;
    cout<<"Enter 25 Elements of Array : ";
    for (int i = 0; i < 25; i++)
    {
        cin>>nums[i];
    }
    cout<<"\nWhat Operation You Want??"<<endl;
    cout<<"1. Find Positive Numbers\n2. Find Negative Numbers\n3. Find Even Numbers\n4. Find Odd Numbers"<<endl;
    cin>>choice;
    switch (choice)
    {
    case 1:
        for (int i = 0; i < 25; i++)
        {
            if (nums[i]>=0)
            {
                count++;
            }
        }
        cout<<count<<" numbers in array is positive "<<endl;
        break;

    case 2:
        for (int i = 0; i < 25; i++)
        {
            if (nums[i]<0)
            {
                count++;
            }
        }
        cout<<count<<" numbers in array is negative "<<endl;
        break;
    
    case 3:
        for (int i = 0; i < 25; i++)
        {
            if (nums[i]%2==0)
            {
                count++;
            }
        }
        cout<<count<<" numbers in array is even "<<endl;
        break;
    
    case 4:
        for (int i = 0; i < 25; i++)
        {
            if (nums[i]%2!=0)
            {
                count++;
            }
        }
        cout<<count<<" numbers in array is odd "<<endl;
        break;

    default:
        cout<<"Wrong Choice!!!! ERROR";
        break;
    }
    return 0;
}