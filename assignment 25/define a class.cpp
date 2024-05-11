/*1. Define a class Complex to represent a complex number. Declare instance member variables to store real and imaginary part of a complex number,
 also define instance member functions to set values of complex number and print values of complex number*/
#include<iostream>
using namespace std;
class Complex
{
private:
    int real;
    int img;
public:
    void inputData()
    {
        cout<<"enter the real and imaginary number of the complex:";
        cin>>real;
        cin>>img;
    }
    void ShowData()
    {
        cout<<"complex number is ="<<real<<"+"<<img<<"i";
    }
};
int main()
{
    Complex c1;
    c1.inputData();
    c1.ShowData();
    return 0;

}
