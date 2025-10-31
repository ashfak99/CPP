#include<bits/stdc++.h>
using namespace std;

void reverseString(vector<char>& s)
{
    reverse(s.begin(),s.end());
}

int main(int argc, char const *argv[])
{
    vector<char> s={'A','S','H','F','A','K'};
    reverseString(s);
    for (char out : s)
    {
        cout<<out<<" ";
    }
    
    return 0;
}
