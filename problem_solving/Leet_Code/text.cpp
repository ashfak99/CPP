#include<bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.end(),nums2.begin(),nums2.end());
        sort(nums1.begin(),nums1.end());
        int n=nums1.size();
        int i=n/2;
        if(n%2!=0)
        {
            return nums1[i];
        }
        else{
            double temp=(nums1[i]+nums1[i-1])/2;
            return temp;
        }
}
int main(int argc, char const *argv[])
{
    vector<int> num1={1,2};
    vector<int> num2={3,4};
    cout<<findMedianSortedArrays(num1,num2);
    return 0;
}
