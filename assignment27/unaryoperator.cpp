// Write a C++ program to overload unary operators that is increment and decrement.
#include<iostream>
using namespace std;
class increAndDecrement
{
private:
    int a;
public:
   void setData(int x)
    {
        a=x;
    }
     increAndDecrement operator++()
    {
        increAndDecrement t;
        t.a=++a;
        return t;
    }
    increAndDecrement operator--()
    {
        increAndDecrement t;
        t.a=--a;
        return t;
    }
   void getData()
    {
        cout<<a;
    }
};
int main()
{
    increAndDecrement x1,x2,x3;
    x1.setData(4);
    x2=x1.operator++();
    x2.getData();
    cout<<endl;
    x3=x1.operator--();
    x3.getData();
    return 0;
}
