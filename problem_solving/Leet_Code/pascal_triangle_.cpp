#include<iostream>
#include<vector>
using namespace std;

int factorial(int n)
{
    if (n==0)
    {
        return 1;
    }
    int ans=factorial(n-1);
    return n*ans;
}

vector<vector<int>> pascalTriangle(int n)
{
    vector<vector<int>> pascal(n);
    for (int i = 0; i < n; i++)
    {
        pascal[i].resize(i+1);

        for (int j = 0; j < i+1; j++)
        {
            if (j==0 || j==i)
            {
                pascal[i][j]=1;
            }
            else{
                pascal[i][j]=pascal[i-1][j]+pascal[i-1][j-1];
            }
        }
    }
    return pascal;
}

vector<int> rowPascalTriangle(int n)
{
    int N=n;
    vector<int> pascal(n);
    for (int i = 0; i <= n; i++)
    {
        if (i==0 || i==n)
        {
            pascal[i]=1;
        }
        else{
        pascal[i]=factorial(N)/(factorial(i)*factorial(N-i));
        }
    }
    return pascal;
}

int main(int argc, char const *argv[])
{
   vector<int> pascalIthAnswer;
   pascalIthAnswer=rowPascalTriangle(3);
   for (int i = 0; i < pascalIthAnswer.size(); i++)
   {
    cout<<pascalIthAnswer[i]<<" ";
   }
   

    cout<<"\nFactorial of 5 : "<<factorial(5);
    
    return 0;
}
