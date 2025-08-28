#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int matrix[3][3],count=3;
    cout<<"Enter the Element of Array : ";
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            cin>>matrix[i][j];
        }
    }
    int diagonal_Sum=0;
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            if (i==j)
            {
                diagonal_Sum+=matrix[i][j];
            }
        }
    }
    cout<<"\n\nDiagonal Sum = "<<diagonal_Sum<<endl;
    return 0;
}
