#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums)
{
    sort(nums.begin(),nums.end());
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i]!=i)
        {
            return i;
        }
    }
    return nums.size();
}

int main(int argc, char const *argv[])
{
    vector<int> vec={0,1};
    cout<<missingNumber(vec);
    
    return 0;
}
