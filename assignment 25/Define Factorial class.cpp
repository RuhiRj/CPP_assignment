//3. Define a class Factorial and define an instance member function to find the Factorial of a number using class
#include<iostream>
using namespace std;
class Factorial
{
private:
    int fac;
public:
    void FindFactorial()
    {
        int factorial=1,i;
        cout<<"enter the number:";
        cin>>fac;
        for(i=1;i<=fac;i++){
        factorial=factorial*i;}
        cout<<"Factorial value is =:"<<factorial;
    }
};
int main()
{
    Factorial F1;
    F1.FindFactorial();
    return 0;
}
