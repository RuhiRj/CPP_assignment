//3. Define a function to calculate x raised to the power y.
#include<iostream>
using namespace std;
void raisepower(int,int );
int main()
{
    int x,y;
    cout<<"enter the two numbers";
    cin>>x>>y;
    raisepower(x,y);
    return 0;
}
void raisepower(int a,int b)
{
    int pow=1,i;
    for(i=1; i<=b; i++)
    {
        pow=pow*a;
    }
    cout<<pow;
}
