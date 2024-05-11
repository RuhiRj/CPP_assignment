//Write a C++ program to add two complex numbers using operator overloaded by a friend function.
#include<iostream>
using namespace std;
class Complex
{
private:
    int real;
    int img;
public:
    void setData(int a,int b)
    {
        real=a;
        img=b;
    }
    friend Complex operator+(int X,Complex Y);
    void getData()
    {
        cout<<"real="<<real<<endl<<"img="<<img;
    }

};
Complex operator+(int X,Complex Y)
    {
        Complex temp;
        temp.real=X+Y.real;
        temp.img=Y.img;
        return temp;
    }
    int main()
    {
        Complex c1 ,c2,c3,c4;
        int a,b,c,d;
        //cout<<"enter the real and imginary number:";
        //cin>>a>>b;
       // c1.setData(a,b);
        cout<<"enter the real and imaginary number:";
        cin>>c>>d;
        c2.setData(c,d);
        c3=operator+(5,c2);
         c3=5+c2;
        c3.getData();
        cout<<endl;
        return 0;
    }
