// Define a class Circle and define an instance member function to find the area of the circle.
#include<iostream>
using namespace std;
class Circle
{
private:
    int r;
public:
    void AreaCircle()
    {
        int ar;
        cout<<"enter the radius of the circle:";
        cin>>r;
        ar=3.14*r*;
        cout<<"Area of the circle is =:"<<ar;
    }
};
int main()
{
    Circle c1;
    c1.AreaCircle();
    return 0;
}
