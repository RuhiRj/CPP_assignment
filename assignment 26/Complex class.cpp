/* Define a class Complex to represent a complex number with instance variables a and b to
store real and imaginary parts.
Also define following member functions a. void setData(int,int) b. void showData()
c. Complex add(Complex)*/
#include<iostream>
using namespace std;
class Complex
{
private:
    int real,img;//instance member variable
public:
    void SetData(int a,int b)//local variable
    {
        real=a;
        img=b;
    }
    void ShowData()
    {
        cout<<"real="<<real<<" "<<"img="<<img;
    }
    Complex Add(Complex b)
    {
        Complex temp;
        temp.real = real + b.real;
        temp.img = img + b.img;
        return temp;
    }
};
void SetData(int,int );
void ShowData();
Complex Add(Complex b);
int main()
{
    Complex c1,c2,c3;
    c1.SetData(2,4);
    c1.ShowData();
    cout<<endl;
    c2.SetData(8,9);
    c2.ShowData();
    cout<<endl;
    c3=c2.Add(c1);
    c3.ShowData();
    return 0;

}
