#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007

long long power(long long base,long long exp)
{
    long long ans=1;
    exp%=MOD;
    while (exp>0)
    {
        if(exp%2==1) ans=(ans*base)%MOD;
        base=(base*base)%MOD;
        exp/=2;
    }
    return ans;
}

int solve(int n, int m)
{
    long long ans=0;
    for (int i = 1; i <= n; i++)
    {
        int term=power(i,m);
        ans=(ans+term)%MOD;
    }
    return (int)ans;
}

int main(int argc, char const *argv[])
{
    int n=5,k=3;
    cout<<solve(n,k);
    return 0;
}
