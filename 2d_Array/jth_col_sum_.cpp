#include<iostream>
#include<climits>
using namespace std;
int main(int argc, char const *argv[])
{
    int matrix[3][3];
    int count=3;
    int maxColSum=INT_MIN;
    cout<<"Enter the element of Array : ";
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            cin>>matrix[i][j];
        }
    }
    
    for (int i = 0; i < count; i++)
    {
        int maxSumJ=0;
        for (int j = 0; j < count; j++)
        {
            maxSumJ+=matrix[j][i];
        }
        maxColSum=max(maxColSum,maxSumJ);
    }
    cout<<"\nMax Sum : "<<maxColSum;
    return 0;
}
