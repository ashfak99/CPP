#include<iostream>
using namespace std;

//Macro
#define MAX2(x,y)((x)>(y)?(x):(y))
#define MAX3(x,y,z) (MAX2(MAX2(x,y),z))

//Functions
void get_Matric(int m, int n, int  arr_1[100][100])
{
    cout<<"Enter The Element of "<<m<<"x"<<n<<" array"<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr_1[i][j];
        }
    }
}

void display(int m, int n, int arr[100][100])
{
    cout<<"\n\n*****OUTPUT*****"<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j= 0; j < n; j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
    
}

void default_row(int arr[100][100], int m, int row=3)
{
    cout<<"Enter the Element of "<<row<<"x"<<m<<" array : "<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"\n\n*****OUTPUT*****"<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
}


//function overloading
double power(double m, int n=2)
{
    double result=1.0;
    for (int i = 0; i < n; i++)
    {
        result*=m;
    }
    return result;
}

int power(int m, int n=2)
{
    int result=1;
    for (int i = 0; i < n; i++)
    {
        result*=m;
    }
    return result;
}

//Inline function
inline int max2(int x, int y)
{
    return ((x)>(y)?(x):(y));
}

inline int max3(int x, int y, int z)
{
    return max2(max2(x,y),z);
}

//MAIN FUNCTION
int main(int argc, char const *argv[])
{
    int Intbase=3;
    int intResult=power(Intbase);
    cout<<Intbase<<" sqaure(int version) "<<intResult<<endl;

    double doublebase=3.9;
    double doubleresult=power(doublebase);
    cout<<doublebase<<" sqaure(double version) "<<doubleresult<<endl;
    return 0;
}
