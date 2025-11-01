#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> vec={1,2,3};
    vector<int>temp;
    for ( int v : vec)
    {
        temp.push_back(v+2);
    }
    for ( int t : temp)
    {
        cout<< t<<" ";
    }
    
    
    return 0;
}
