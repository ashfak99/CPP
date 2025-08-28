#include<iostream>
using namespace std;
class item
{
private:
    int number;
    float cost;
public:
    void getdata(int a, float b);
    void putdata(void)
    {
        cout<<"Number : "<<number<<endl;
        cout<<"Cost : "<<cost<<endl;
    }
};

void item::getdata(int a, float b)
{
    number=a;
    cost=b;
}