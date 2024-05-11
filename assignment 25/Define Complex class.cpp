/*2. Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate number of instance member variables and
also define instance member functions to set values for time and display values of time*/
#include<iostream>
using namespace std;
class Time
{
private:
    int hours;
    int minutes;
    int sec;
public:
    void SetValue()
    {
        cout<<"enter the hours , minutes , and seconds of the Time:";
        cin>>hours;
        cin>>minutes;
        cin>>sec;
    }
    void ShowValue()
    {
        cout<<"represent time is ="<<hours<<" hr "<<minutes<<" min "<<sec<<" sec";
    }

};
int main()
{
    Time t1;
    t1.SetValue();
    t1.ShowValue();
    return 0;
}
