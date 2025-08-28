#include<iostream>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    int nums[4][4];
    int temp[16];
    cout<<"Enter the Element of array : ";
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin>>nums[i][j];
        }
    }
    int index=0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            temp[index]=nums[i][j];
            index++;
        }
    }
    
    sort(temp,temp+16);
    index=0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            nums[i][j]=temp[index];
            index++;
        }
    }
    cout<<"\n\nOUTPUT"<<endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<nums[i][j]<<"\t";
        }
        cout<<endl;
    }
    
    return 0;
}
