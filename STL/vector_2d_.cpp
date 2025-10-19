#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> v1 = {1,2,3};
    vector<int> v2 = {4,5};
    vector<int> v3 = {6,7};

    vector<vector<int>> v = {v1,v2,v3};

    for(const auto& x : v)
    {
        for ( int y : x)
        {
           cout<<y<<" ";
        }
        cout<<endl;
    }
    return 0;
}
