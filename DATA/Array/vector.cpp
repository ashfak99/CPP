#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int> array)
{
    cout<<endl;
    for (auto i : array)
    {
        cout<<i<<"\t";
    }
}

int main(int argc, char const *argv[])
{
    vector<int> vecArray;
    vecArray.push_back(1);
    vecArray.push_back(2);
    vecArray.push_back(3);
    vecArray.push_back(4);

    cout<<"Original Array"<<endl;
    printArray(vecArray);

    cout<<"\nDeleted Last Element"<<endl;
    vecArray.pop_back();
    printArray(vecArray);

    vecArray.insert(vecArray.begin(),0);
    cout<<"\nInsert Function"<<endl;
    printArray(vecArray);

    vecArray.erase(vecArray.end()-1);
    cout<<"\nErase At End"<<endl;
    printArray(vecArray);

    vector<int> vec2;
    vec2.push_back(11);
    vec2.push_back(12);
    vec2.push_back(13);
    vec2.push_back(14);

    cout<<"\nVector 2"<<endl;
    printArray(vec2);

    cout<<"\nSwap Value of Both Vector"<<endl;
    vecArray.swap(vec2);

    cout<<"\nVector 1"<<endl;
    printArray(vecArray);

    cout<<"\nVector 2"<<endl;
    printArray(vec2);

    return 0;
}
