#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> vec;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);

    for (int i = 0; i < vec.size(); i++) 
    {
        cout << vec[i] << " ";
    }
    
    return 0;
}
