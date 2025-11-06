#include<bits/stdc++.h>
using namespace std;

#define FOR(i,n) for(int i=0; i<n; i++)
#define FoR(x,arr) for(int x:arr)
#define PB push_back

typedef vector<int> vi;

int countingPairsWithSum(vi arr, int target)
{
    int count=0;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i+1; j < arr.size(); j++)
        {
            if (arr[i]+arr[j]==target)
            {
                count++;
            }
        }
    }
    return count;
}

vi divisibily(int n)
{
    vi result;
    for (int i = 10; i <= 99; i++)
    {
        if(n%i==0)
        {
            result.PB(i);
        }
    }
    return result;
}

pair<vi,vi> evenOddPartition(vi arr)
{
    vi even,odd;
    FOR(i,arr.size())
    {
        if (arr[i]%2==0)
        {
            even.PB(arr[i]);
        }
        else{
            odd.PB(arr[i]);
        }
    }
    return {even,odd};
}

double long factorial(int n)
{
    if (n==0) {
      return 1;
    }
    return n*factorial(n-1);
}


int main(int argc, char const *argv[])
{
    //vi arr={1,2,3,5,4};
    // int target=6;
    // //cout<<countingPairsWithSum(arr,target)<<endl;
    // vi result=divisibily(100);
    // for ( auto res : result)
    // {
    //     cout<<res<<" ";
    // }

    // pair<vi, vi> result=evenOddPartition(arr);
    // cout<<"even "<<endl;
    // FoR(a,result.first)
    // {
    //     cout<<a<<" ";
    // }
    // cout<<endl<<"odd"<<endl;
    // FoR(b,result.second)
    // {
    //     cout<<b<<" ";
    // }

    cout<<fixed<<setprecision(0)<<factorial(45);
    return 0;
}
