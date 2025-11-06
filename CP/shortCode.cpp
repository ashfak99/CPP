#include<bits/stdc++.h>
using namespace std;

#define PB push_back

typedef vector<int> vi;

int factorial(int n)
{
    if(n==0) return 1;
    int result = n*factorial(n-1);
    return result;
}

int fabinacci(int n)
{
    if(n==0) return 0;
    if(n==1) return 1;
    int result=fabinacci(n-1)+fabinacci(n-2);
    return result;
}

int main(int argc, char const *argv[])
{
    // vi v;
    // v.PB(1);
    // v.PB(3);
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout<<v[i]<< " ";
    // }
    cout<<fabinacci(6);
    return 0;
}
