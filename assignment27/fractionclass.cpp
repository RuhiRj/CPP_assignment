/* Define a C++ class fraction
class fraction { long numerator; long denominator; Public: fraction (long n=0, long d=0); }
Overload the following operators as member or friend:
a) Unary ++ (pre and post both) b) Overload as friend functions: operators << and >>*/

#include<iostream>
using namespace std;
class Fraction
{
private:
    long numerator;
    long denominator;
public:
    Fraction(long n=0,long d=0)
    {
        numerator=n;
        denominator=d;
    }
    Fraction operator++()
    {
        Fraction temp;
        temp
    }



};
