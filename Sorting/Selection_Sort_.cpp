#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int nums[25];
    cout<<"Enter the Element of Array : ";
    for (int i = 0; i < 25; i++)
    {
        cin>>nums[i];
    }
    
    //SELECTION-SORTING
    for (int i = 0; i < 24; i++)
    {
       for (int j = i+1; j < 25; j++)
       {
           if (nums[i]>nums[j])
           {
             int temp=nums[i];
             nums[i]=nums[j];
             nums[j]=temp;
           }
       }
       
    }
    cout<<"\n Array After Sorting: "<<endl;
    for (int i = 0; i < 25; i++)
    {
        cout<<nums[i]<<"\t";
    }
    cout<<endl;
    return 0;
}
