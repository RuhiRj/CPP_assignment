//Write a C++ program to calculate the area of a circle
#include<iostream>
using namespace std;
int main()
{
    int r,area=0;
    cout<<"enter the radius of the circle:";
    cin>>r;
    area=3.14*r*r;
    cout<<"area of the circle is:"<<area;
    return 0;
}
