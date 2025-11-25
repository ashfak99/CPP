#include<bits/stdc++.h>
using namespace std;

#define FOR(i,j,k) for(int i=j; i<=k; i++)
#define FOR2(i,j) for(auto const& i : j)

typedef vector<int> vi;
typedef unordered_map<int,int> um;

void missingElement(vi& nums)
{
    sort(nums.begin(), nums.end());

    // um map;

    // FOR(i,0,nums.size()-1)
    // {
    //     map[nums[i]]++;
    // }

    int indx=0;
    FOR(i,nums[0],nums[nums.size()-1])
    {
        if (nums[indx]==i)
        {
            cout<<i<<" ";
            indx++;
        }
        else{
            cout<<" Not icld "<<i<<" N ";
        }
    }

    // cout<<endl;
    // FOR2(pair, map)
    // {
    //     cout<<pair.first<<" : "<<pair.second<<endl;
    // }
}

int main(int argc, char const *argv[])
{
    vi nums={5,1,4,2};
    missingElement(nums);
    return 0;
}
