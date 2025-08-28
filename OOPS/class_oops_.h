#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;


    // Generate two parts and combine (for 10 digits)
    long long part1 = rand() % 90000 + 10000; // 5-digit
    long long part2 = rand() % 90000 + 10000; // 5-digit

    const long long accountNumber = part1 * 100000 + part2;


class item
{
private:
    static int count;
    int number;
public:
    void getdata(int a)
    {
        number=a;
        count++;
    }
    void getcount(void)
    {
        cout<<"Count : "<<count<<endl;
    }
};

class bank
{
private:
    string holderName;
    int numberAC;
    string acType;
    double amount;
public:
    void initial_value(void){
        amount=10000;
        numberAC=accountNumber;
        cout<<"Enter the Account Holder Name : ";
        cin>>holderName;
        cout<<"\nEnter the Type of Account : ";
        cin>>acType;
    }
    void deposit(int amt)
    {
        amount=amount+amt;
    }
    void withdraw(int amnt)
    {
        amount=amount-amnt;
        cout<<"\nYou withdraw "<<amnt<<" amount. Your balance : "<<amount<<endl;
    }
    void display(void)
    {
        cout<<"\n\n\n*****OUTPUT*****";
        cout<<"\nName : "<<holderName<<endl;
        cout<<"Balance : "<<amount<<endl;
    }
};
