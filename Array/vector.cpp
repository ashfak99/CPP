#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    cout<<vec.front()<<endl;;
    cout<<vec.back()<<endl;
    cout<<vec.at(3)<<endl;
    cout<<vec.size()<<endl;
    vec.pop_back();
    cout<<vec.back()<<"\n"<<vec.size()<<endl;
    return 0;
}
