#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    while (1)
    {
        int room_capacity, attending_people;
        cout<<"\nEnter the Maximum Room Capacity and attending people  : ";
        cin>>room_capacity>>attending_people;
        if (attending_people>room_capacity)
        {
            cout<<"The meeting can't be held as planned due to fire regulation, "<<attending_people-room_capacity<<" peoples are extras remove these people"<<endl;
        }
        else
        {
            cout<<"It is legal to hold the meeting "<<room_capacity-attending_people<<" more peoples attend the meeting"<<endl;
        }
    }    
    return 0;
}