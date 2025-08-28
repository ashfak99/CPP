#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int> arr, int target)
{
    vector<int>ans;
    int ps;
    int n=arr.size();
    int i=0,j=n-1;
    while (i < j)
    {
        ps=arr[i] + arr[j];
        if (ps > target)
        {
            j--;
        }
        else if (ps < target)
        {
            i++;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    
    return ans;
}
int main(int argc, char const *argv[])
{
    vector<int> nums={2,7,11,15};
    int target=18;
    vector<int> ans=pairSum(nums,target);
    cout<<ans[0]<<", "<<ans[1]<<endl;
    return 0;
}
