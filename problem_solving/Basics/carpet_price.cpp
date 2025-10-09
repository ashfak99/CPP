#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int length;
    double price = 2.75;
    cout<<"Enter the length of Carpet : ";
    cin>>length;
    if(length>10)
    {
        cout<<"Carpet Price : $"<<(length*price)-(length*price*0.15);
    }
    else{
        cout<<"Carpet Price : $"<<length*price;
    }
    return 0;
}
