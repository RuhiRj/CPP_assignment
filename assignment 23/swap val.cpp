//Write a C++ program to swap values of two int variables without using third variable
#include<iostream>
using namespace std;
int main()
{
    int l,b;
    cout<<"enter the two numbers:";
    cin>>l>>b;
    l=l+b;
    b=l-b;
    l=l-b;
    cout<<"after swap value is:"<<l<<endl<<b;
    return 0;
}
