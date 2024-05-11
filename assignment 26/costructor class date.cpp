// Define a class Date and write a program to Display Date and initialize date object using Constructors.
#include<iostream>
using namespace std;
class Date
{
private:
    int day;
    int month;
    int year;
public:
    Date(int d,int m,int y)
    {
        day=d;
        month=m;
        year=y;
    }
    void displayDate()
    {
        cout<<"date is: "<<day<<"-"<<month<<"-"<<year;
    }
};
int main()
{
    Date d(5,8,2003);
    d.displayDate();
    return 0;
}
