//Write a C++ program to find the maximum of two numbers.
#include<iostream>
using namespace std;
int main()
{
    int l,b;
    cout<<"enter the two numbers:";
    cin>>l>>b;
    if(l>b)
    cout<<"the maximum number is:"<<l<<endl;
    else
    cout<<"the maximum number is:"<<b;
    return 0;
}
