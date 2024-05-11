/* Define a class Box and write a program to enter length, breadth and height and initialize objects using constructor
also define member functions to calculate volume of the box. */
#include<iostream>
using namespace std;
class Box
{
private:
    int length;
    int breadth;
    int height;
public:
    Box(int len,int bre,int heig)
    {
        length=len;
        breadth=bre;
        height=heig;
    }
    void displayBoxVolume()
    {
        cout<<"Box volume is: "<<length*breadth*height;
    }
};
int main()
{
    Box b(9,8,3);
    b.displayBoxVolume();
    return 0;
}
