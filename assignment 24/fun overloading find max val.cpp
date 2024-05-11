// Write functions using function overloading to find a maximum of two numbers and both the numbers can be integer or real
#include<iostream>
using namespace std;
void max(int a, int b);
void max(float x,float y);
int max(float d,int f);
int main()
{
    int a,b;
    cout<<"enter the two numbers:";
    cin>>a>>b;
    max(a,b);
    float x,y;
    cout<<"enter the two numbers:";
    cin>>x>>y;
    max(x,y);
    float d;
    int f;

    cout<<"enter the two numbers:";
    cin>>d>>f;
    cout<<"enter the two numbers:"<<max(d,f);

    return 0;

}
void max(int a, int b)
{
    if(a>b)

        cout<<"the greatest number is:"<<a;
    else
            cout<<"the greatest number is:"<<b;

}
void max(float x,float y)
{
    if(x>y)

        cout<<"the greatest number is:"<<x;
    else
            cout<<"the greatest number is:"<<y;

}
int max(float d,int f)
{
    if(d>f)

        return d;
    else
           return f;
}
