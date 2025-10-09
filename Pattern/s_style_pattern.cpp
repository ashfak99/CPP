#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int i,j,row,col;
    cin>>row>>col;
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            if (((i==0||i==round(row/2)||i==row-1)&& (j>0 && j<col-1)) || ((i==1 || i==row-2) && (j==0 || j==col-1)) || ((i>1 && i<round(row/2)) && (j==0)) || ((i>round(row/2) && i<row-2) && (j==col-1)))
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
