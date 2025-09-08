#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter the size of the square matrix: ";
    cin>>n;
    int arr[n][n];
    cout<<"Enter the elements of the matrix: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int diagonalsum1=0;

    for (int  i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i==j)
            {
                diagonalsum1+=arr[i][j];
            }
        } 
    }
    printf("The sum of the primary diagonal is: %d\n",diagonalsum1);
    
    int diagonalsum2=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0;  j< n; j++)
        {
            if (i+j==n-1)
            {
                diagonalsum2+=arr[i][j];
                printf("The sum of the secondary diagonal is: %d\n",diagonalsum2);
                printf("The absolute difference between the sums of the diagonals is: %d\n",abs(diagonalsum1-diagonalsum2));
            }
            
        }
        
    }
    
    return 0;
}
