#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    freopen("out.txt","w",stdout);
    freopen("in.txt","r",stdin);
    int i,j,row,col;
    cin>>row>>col;
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            if (((i==0) && (j>=1 && j<=col-2 )) || ((i==round(row/2)) && (j>=0 && j<=col-1)) || ((j==0 || j==col-1) && (i>0 && i<row )))
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
