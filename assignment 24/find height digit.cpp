//2. Define a function to find the highest value digit in a given number.
#include<iostream>
using namespace std;
void heightval(int x);
int main()
{
    int a;
    cout<<"enter the number:";
    cin>>a;
    heightval(a);//this is the call by value
    return 0;
}
void heightval(int x)
{
    int rem=0,qu=0;
    while(x)
    {
        rem=x%10;
        x=x/10;
        if(rem>x)
    }
}
