//Write a C++ program to calculate an average of 3 numbers.
#include<iostream>
using namespace std;
int main()
{
    int l,b,h,avg=0,sum=0;
    cout<<"enter the three numbers:";
    cin>>l>>b>>h;
    sum=l+b+h;
    avg=sum/3;
    cout<<"average of the three numbers is:"<<avg;
    return 0;
}

