//Write a function using the default argument that is able to add 2 or 3 numbers.
#include<iostream>
using namespace std;
void add_value_by_defaultarg(int x,int=0,int=0);
int main()
{
    int a=2,b=3,c=9;
    add_value_by_defaultarg(a,b);
    cout<<endl;
    add_value_by_defaultarg(a,b,c);
    return 0;
}
void add_value_by_defaultarg(int x,int y)
{
    int add;
    add=x+y;
    cout<<"sum of two number is:"<<add<<endl;
}
void add_value_by_defaultarg(int x,int y,int z)
{
    int add;
    add=x+y+z;
    cout<<"add;
}
