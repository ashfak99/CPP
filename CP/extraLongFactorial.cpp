#include<bits/stdc++.h>
using namespace std;

#define FOR(i,n,s) for(int i=s; i<=n; i++)
#define For(i,s) for(int i=s; i>=0; i--)
#define PB push_back

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

int main(int argc, char const *argv[])
{
    extraLongFactorial(45);
    return 0;
}
