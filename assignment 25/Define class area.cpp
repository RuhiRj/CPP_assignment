//.Define a class Area and define instance member functions to find the area of the different shapes like square, rectangle , circle etc.
#include<iostream>
using namespace std;
class Area
{
private:
    int r;
    int length,breadth;
    int side;
public:
    void AreaSquare()
    {
        int ar;
        cout<<"enter the side of the square:"<<endl;
        cin>>side;
        ar=side*side;
        cout<<"area of the square is=:"<<ar;
    }
    void AreaRectangle()
    {
        int are;
        cout<<"enter the length and breadth of the rectangle:"<<endl;
        cin>>length>>breadth;
        are=length*breadth;
        cout<<"area of the rectangle is =:"<<are;
    }
    void AreaCircle()
    {
        int area;
        cout<<"enter the radius of the circle :"<<endl;
        cin>>r;
        area=2*3.14*r;
        cout<<"area of the circle is:"<<area;
    }
} ;
int main()
{
    Area c1,r1,s1;
    c1.AreaCircle();
    cout<<endl;
    r1.AreaRectangle();
    cout<<endl;
    s1.AreaSquare();
    cout<<endl;
    return 0;
}
