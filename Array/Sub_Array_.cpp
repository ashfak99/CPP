#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n=7;
    int arr[]={3,-4,5,4,-1,-8};

    int maxSum=INT64_MIN;    

    for (int  st = 0; st <n; st++)
    {
        int currSum=0;
        for (int end = st; end < n; end++)
        {
            currSum+=arr[end];
            maxSum=max(currSum,maxSum);
        }
    }
      cout<<"Max sum of subarray = "<<maxSum<<endl;
    return 0;
}
