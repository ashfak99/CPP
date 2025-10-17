#include<iostream>
using namespace std;

int sqrt(int x)
{
    int n;
    if (x>4)
    {
        n=(x/2)+1;
        cout<<n<<endl;
    }
    else
    {
        n=x;
    }
    for (int i = 0; i <= n; i++)
    {
        if(i*i==x)
         return i;
        if(i*i>x)
         return i-1;
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    cout<<sqrt(5);
    return 0;
}
