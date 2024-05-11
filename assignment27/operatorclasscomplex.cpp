/*1. Define a class Complex with appropriate instance variables and member functions.
Define following operators in the class:
     a. +
     b.-
     c. *
     d. ==
*/
#include<iostream>
using namespace std;
class Complex
{
private:
    int a,b;//instance member variable
public:
  void setData(int X ,int Y)
    {
        a=X;
        b=Y;
    }
    void getData()
    {
        cout<<"real number ="<<a<<"imaginary number ="<<b<<endl;
    }

    Complex operator+(Complex X)
    {
        Complex temp;
        temp.a=a+X.a;
        temp.b=b+X.b;
        return temp;
    }
    Complex operator-(Complex X)
    {
        Complex temp;
        temp.a=a-X.a;
        temp.b=b-X.b;
        return temp;
    }
    Complex operator*(Complex X)
    {
        Complex temp;
        temp.a=a*X.a;
        temp.b=b*X.b;
        return temp;
    }
    Complex operator==(Complex X)
    {
        Complex temp;
        temp.a=a==X.a;
        temp.b=b==X.b;
        return temp;
    }
};
int main()
{
    Complex C1,C2,C3,C4,C5,C6,C;
    C1.setData(12,6);
    C2.setData(11,10);
    C.setData(11,10);

    C3=C1.operator+(C2);
    C3.getData();
    cout<<endl;
    C4=C1.operator-(C2);
    C4.getData();
    cout<<endl;
    C5=C1.operator*(C2);
    C5.getData();
    cout<<endl;
    C6=C2.operator==(C1);
    C6.getData();
    cout<<endl;
    return 0;


}
