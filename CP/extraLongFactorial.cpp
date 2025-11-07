#include<bits/stdc++.h>
using namespace std;

#define FOR(i,n,s) for(int i=s; i<=n; i++)
#define For(i,s) for(int i=s; i>=0; i--)
#define PB push_back
#define GTRIF(x,y) if(x>y)
#define EQLIF(x,y) if(x==y)

typedef vector<int> vi;

void multiply(vi& result, int x)
{
    int carry=0;
    FOR(i,result.size()-1,0){
        int prod=result[i]*x+carry;
        result[i]=prod%10;
        carry=prod/10;
    }

    while (carry!=0)
    {
        result.PB(carry%10);
        carry=carry/10;
    }
}

void extraLongFactorial(int n)
{
    vi result;
    result.PB(1);
    FOR(i,n,2)
        multiply(result,i);

    For(i,result.size()-1)
        cout<<result[i];
    
    cout<<endl;
}

int powerSumHelper(int x, int n, int current=1)
{
    long long power=1;
    FOR(i,n,0)
    {
        power*=current;
        GTRIF(power,x) return 0;
    }

    GTRIF(power,x) return 0;
    EQLIF(power,x) return 1;

    return powerSumHelper(x-power,n,current+1)+powerSumHelper(x,n,current+1);
}

int powerSum(int x, int n)
{
    int ans=powerSumHelper(x,n,1);
    return ans;
}

int main(int argc, char const *argv[])
{
    //extraLongFactorial(45);
    int x=sqrt(13);
    //cout<<x<<endl;
    cout<<powerSum(100,2);
    return 0;
}
