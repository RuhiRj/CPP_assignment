// Define overloaded functions to calculate area of circle, area of rectangle and area of triangle
#include<iostream>
using namespace std;
float area(int );
int area(int, int );
int area(float,int );
int main()
{
    int r;
    cout<<"enter the radius of the circle :";
    cin>>r;
    cout<<"area of the circle is:"<<area(r);
    int l,b;
    cout<<endl;
    cout<<"enter the length and breadth of the rectangle:";
    cin>>l>>b;
    cout<<endl;
    cout<<"area of the rectangle is:"<<area(l,b);
    int a;
    cout<<endl;
    cout<<"enter the side of the triangle:";
    cin>>a;
    cout<<"area of the triangle is"<<area(a);
    return 0;
}
float area(int r)
{
    float squ;
    squ=3.14*r*r;
    return squ;
}
int area(int l,int b)
{
    int s;
    s=l*b;
    return s;
}
int area(float a,int b)
{
    return 1/2*a*b;
}
