#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int matrixA[3][3],matrixB[3][3],matrixC[3][3];
    cout<<"Enter the Element of Matrix A : ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>matrixA[i][j];
        }
    }

    cout<<"Enter the Element of Matrix B : ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>matrixB[i][j];
        }
    }
    
    for (int i = 0; i < 3; i++)
    {
       for (int j = 0; j < 3; j++)
       {
          matrixC[i][j]=0;
          for (int k = 0; k < 3; k++)
          {
            matrixC[i][j]+=matrixA[i][k]*matrixB[k][j];
          }
          
       }
       
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<matrixC[i][j]<<"\t";
        }
        cout<<endl;
    }
    
    return 0;
}
