#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int nums[25];
    cout<<"Enter the Element of Arrays : ";
    for (int i = 0; i < 25; i++)
    {
        cin>>nums[i];
    }
    
    //BUBBLE-SORTING
    for (int i = 0; i < 24; i++)
    {
        for (int j = 0; j < 25; j++)
        {
            if (nums[j]>=nums[j+1])
            {
                int temp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
            }
        }
    }
    cout<<"\nAfter Sorting : ";
    for (int i = 0; i < 25; i++)
    {
        cout<<nums[i]<<"\t";
    }
    
    return 0;
}
