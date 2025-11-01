#include<bits/stdc++.h>

using namespace std;

void convertToString(string& s)
{
    s.erase(remove(s.begin(),s.end(),' '),s.end());
    s.erase(remove(s.begin(),s.end(),','),s.end());
    s.erase(remove(s.begin(),s.end(),':'),s.end());
}

void convertToLower(string& s)
    {
        for(char &c : s)
        {
            c=tolower(c);
        }
    }

int main(int argc, char const *argv[])
{
    string str="A,s:h f,a:k";
    convertToString(str);
    convertToLower(str);
    cout<<str;
    return 0;
}
