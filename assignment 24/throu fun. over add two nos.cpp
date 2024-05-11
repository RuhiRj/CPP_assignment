//.Write functions using function overloading to add two numbers having different data types.
#include<iostream>
using namespace std;
void add(int a,int b);
void add(float x, int y);
int main()
{
    int a,b;
    cout<<"enter two number of the integers:";
    cin>>a>>b;
    cout<<"addition of the two numbers is:";
    add(a,b);
    float x;
    int y;
    cout<<"enter two number of the integers:";
    cin>>x>>y;
    cout<<"addition of the two numbers is:"<<endl;
    add(x,y);
    return 0;
}
void add(int a,int b)
{
    int sum=0;
    sum=a+b;
    cout<<sum;
}
void add(float x, int y)
{
    float sum=0;
    sum=x+y;
    cout<<sum;
}
