#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vll vector<long long int>

int main(int argc, char const *argv[])
{
    int number[20],n;
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);

    std::ios::sync_with_stdio(false);
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>number[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<number[i]<<"\t";
    }
    return 0;
}
