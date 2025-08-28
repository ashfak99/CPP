#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    float bs,hra,da,ts;
    cout<<"Enter Basic Salary : ";
    cin>>bs;
    if (bs<1500)
    {
        hra=bs*15/100;
        da=bs*90/100;
        ts=bs+hra+da;
        cout<<"Total Salary = "<<ts;
    }
    else{
        hra=500;
        da=bs*98/100;
        ts=bs+hra+da;
        cout<<"Total Salary = "<<ts;
    }
    
    return 0;
}
