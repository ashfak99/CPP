#include<iostream>
#include<climits>
using namespace std;
int main(int argc, char const *argv[])
{
    int maximum=INT_MIN;
    int nums[5][5];
    cout<<"Enter the elements of Array : ";
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin>>nums[i][j];
        }
    }
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
           maximum=max(maximum,nums[i][j]);
        }
    }
    cout<<"\n\n\nOUTPUT"<<endl;
    cout<<"Largest Number : "<<maximum<<endl;
    return 0;
}
