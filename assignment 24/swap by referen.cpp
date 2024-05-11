//Define a function to swap data of two int variables using call by reference
//using function overloading find the exponent base , swapping of number and multiplication of two numbers.
#include<iostream>
using namespace std;
void swap(int &,int &);
int main()
{
    int x=8,y=7;
    swap(x,y);
    return 0;
}
void swap(int &a,int &b)
{
    int t;
    t=a;
    a=b;
    b=t;
    cout<<"swap value :"<<a<< endl <<b;
}

