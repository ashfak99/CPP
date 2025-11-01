#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int i=0;
    while (i<=10)
    {
        if (i==4)
        {
            break;
        }
        i++;
    }
    cout<<i;
    return 0;
}
