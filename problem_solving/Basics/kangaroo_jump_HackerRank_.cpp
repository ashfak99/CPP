#include<bits/stdc++.h>
using namespace std;

void jump(int x=0, int v=3, int y=4, int z=2)
{
    int firstJump =0,secondJump=0;
    for (int i = 0; i < 4; i++)
    {
        firstJump+=(x+v);
    }
    for (int  i = 0; i < 4; i++)
    {
        secondJump+=(y+z);
    }
    
    cout<<firstJump<<" "<<secondJump;
}

int main(int argc, char const *argv[])
{
    jump();
    return 0;
}
