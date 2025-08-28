#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int matrix[4][4];
    cout<<"\nEnter the Element of Matrix : ";
    for (int i = 0; i < 4; i++)
    {
        for (int j= 0; j < 4; j++)
        {
            cin>>matrix[i][j];
        }
    }
    cout<<"\n\nMATRIX BEFORE TRANSPOSE"<<endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }
    

    for (int i = 0; i <4; i++)
    {
        for (int j = i; j < 4; j++)
        {
            swap(matrix[i][j],matrix[j][i]);
        }
    }

    cout<<"\n\n\nOUTPUT"<<endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }
    
    
    return 0;
}
