//Define a function to check whether a given number is a term in a Fibonacci series or not.
#include<iostream>
using namespace std;
void fibonacci(int x);
int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;
    fibonacci(n);
    return 0;
}
void fibonacci(int x)
{
    int a=0,c=1;
    while(x)
    {

        x-=1;
    }
    cout<<c;
}
