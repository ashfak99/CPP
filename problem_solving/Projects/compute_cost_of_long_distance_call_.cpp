#include<bits/stdc++.h>
using namespace std;

int compute_price(string day, int time,int c_min){
    vector<string> wkday={"Mo","Tu","We","Th","Fr"};
    vector<string> wknday={"Sa","Su"}
    string da;
    for(da : wknday)
    {
        if(day==da)
        {
            return (c_min)*0.15;
        }
        else if (time == )
        {
            
        }
        
    }
}

int main(int argc, char const *argv[])
{
    string i_day;
    int i_time, i_c_min;
    cout<<"\nWelcome To The Union of Call"<<endl;
    cout<<"Enter the day, time and minutes of call (Ex: Mo for Monday, 1300 for 01:00pm) : ";
    cin>>i_day>>i_time>>i_c_min;
    float price = compute_price(i_day,i_time,i_c_min);
    cout<<"Price for call duration "<<i_c_min<<" min : $"<<price;
    return 0;
}