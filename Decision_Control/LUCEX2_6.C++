#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    cout<<"M for Male\n F for Female\n P for Post-Graduate\n G for Graduate";
    int yos;
    char Gend,edu;
    int salary;

    cout<<"\nEnter Gender, Year of Service, Qualification : ";
    cin>>Gend>>yos>>edu;

    if (Gend=='M' && yos >=10 && edu=='P')
    {
        salary=15000;
        cout<<"Salary : "<<salary;
    }
    else if (Gend=='M' && yos >=10 && edu=='G' || Gend=='M' && yos <10 && edu=='P' || Gend=='F' && yos <10 && edu=='P')
    {
        salary=10000;
        cout<<"Salary : "<<salary;
    }
    else if (Gend=='M' && yos <10 && edu=='G')
    {
        salary=7000;
        cout<<"Salary : "<<salary;
    }
    else if(Gend=='F' && yos >=10 && edu=='P')
    {
        salary=12000;
        cout<<"Salary : "<<salary;
    }
    else if(Gend=='F' && yos >=10 && edu=='G')
    {
        salary=9000;
        cout<<"Salary : "<<salary;
    }
    else {
        salary=6000;
        cout<<"Salary : "<<salary;
    }
    
    return 0;
}
