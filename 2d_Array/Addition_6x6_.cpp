#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int matrixA[6][6], matrixB[6][6], matrixC[6][6];
    cout<<"\nEnter the Element of Matrix A : ";
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cin>>matrixA[i][j];
        }
    }
    
    cout<<"\nEnter the Element of Matrix B : ";
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cin>>matrixB[i][j];
        }
    }
    
   
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            matrixC[i][j]=matrixA[i][j]+matrixB[i][j];
        }
    }
   
    cout<<"\n\nOUTPUT : "<<endl;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
           cout<<matrixC[i][j]<<"\t";
        }
        cout<<endl;
    }
    
    return 0;
}
