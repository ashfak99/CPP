#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int nums[10],reverse_nums[10];
    int count=0;

    cout<<"Enter the Element of Array : ";
    for (int i = 0; i < 10; i++)
    {
        cin>>nums[i];
    }
    
    //reverse order;
    for (int i = 9; i >=0; i--)
    {
        reverse_nums[count]=nums[i];
        count++;
    }
    
    cout<<"\n\nOUTPUT"<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout<<reverse_nums[i]<<"\t";
    }
    
    return 0;
}
