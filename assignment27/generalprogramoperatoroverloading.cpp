#include<iostream>
using namespace std;
class Complex
{
private:
    int a,b;
public:
    void setData(int X,int Y)
    {
        a=X;
        b=Y;
    }
    void getData()
    {
        cout<<"real="<<a<<"img="<<b;
    }
    Complex operator+(Complex C)
    {
        Complex temp;
        temp.a=a+C.a;
        temp.b=b+C.b;
        return temp;
    }
    Complex operator-(Complex C)
    {
        Complex temp;
        temp.a=a-C.a;
        temp.b=b-C.b;
        return temp;
    }
    friend Complex operator+(Complex , Complex);
    friend Complex operator+(int ,Complex);
    Complex operator
};
Complex operator+(Complex d ,Complex f)
{
    Complex temp;
    temp.a=d.a+f.a;
    temp.b=d.b+f.b;
    return temp;
}
Complex operator+(int k,Complex P)
{
    Complex temp;
    temp.a=k+p.a;
    temp.b=p.b;
    return temp;
}
int main()
{
    Complex c1,c2,c3,c4,c5,c6;
    c1.setData(5,9);
    c2.setData(8,10);
    //c3.setData(78,90);
    //c6.setData(8);
//    c4=c2-c3;
//    c4.getData();
//    cout<<endl;
//    c3=operator+(c1,c2);
//    c3.getData();
//    cout<<endl;
    c5=9+c1;
    c5.getData();
    return 0;
}

