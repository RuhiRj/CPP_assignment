//1. Define a function to check whether a given number is a Prime number or not.
#include<iostream>
using namespace std;
void checkfun(int x);
int main()
{
    int a;
    cout<<"enter the number:";
    cin>>a;
    checkfun(a);
    return 0;
}
void checkfun(int x)
{
    int a,i,flag=0;
    for (i = 2; i <= x / 2; ++i)
    {
        if (x % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        cout<<" is a prime number."<< x;
    else
        cout<<"is not a prime number."<<x;
}

