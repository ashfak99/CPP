#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int m1,m2,m3,m4,m5;
    float per;
    cout<<"Enter Marks all Subject : ";
    cin>>m1>>m2>>m3>>m4>>m5;
    per=(m1+m2+m3+m4+m5)/5;
    if (per>=60)
    {
        cout<<"First Division";
    }
    else if(per>=50){
        cout<<"Second Divison";
    }
    else if(per>=40){
        cout<<"Third Divison";
    }
    else{
        cout<<"Fail";
    }
    
    return 0;
}
