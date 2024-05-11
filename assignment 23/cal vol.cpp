//Write a C++ program to calculate the volume of a cuboid.
#include<iostream>
using namespace std;
int main()
{
    int l,b,h,volume=0;
    cout<<"enter the length , breadth , and height of the cuboid:";
    cin>>l>>b>>h;
    volume=l*b*h;
    cout<<"volume of the cuboid is:"<<volume;
    return 0;
}
