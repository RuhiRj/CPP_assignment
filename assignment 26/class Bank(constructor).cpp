/* Define a class Bank and define member functions to read principal , rate of interest and year.
Another member functions to calculate simple interest and display it. Initialize all details
using constructor. */
#include<iostream>
using namespace std;
class Bank
{
private:
    float principal;
    float rate;
    int time;
public:
    Bank(float p,float r , int t )
    {
        principal=p;
        rate=r;
        time=t;
    }
    void calculatesimpleinterest()
    {
        float simpleinterest;
        simpleinterest=(principal*rate*time)/100;
        cout<<"simple interest is= "<<simpleinterest;
    }
};
int main()
{
    Bank B(20000,3.5,5);
    B.calculatesimpleinterest();
    return 0;
}
