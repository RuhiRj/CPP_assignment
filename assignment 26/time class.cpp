/* Define a class Time to represent a time with instance variables h,m and s to store hour, minute and second.
 Also define following member functions a. void setTime(int,int,int) b. void showTime() c. void normalize() d. Time add(Time) */
#include<iostream>
using namespace std;
class Time
{
private:
    int hour,minute,second;
public:
    void setTime(int h,int m, int s)
    {
        hour=h;
        minute=m;
        second=s;
    }
    void showTime()
    {
        cout<<hour<<"hr"<<endl<<minute<<"min"<<endl<<second<<"sec";
    }
    void normalize()
    {
        int M,S,H;
        while(second>=60){
         minute=minute+1;
         second=second-60;
        }
        while(minute>=60){
            hour=hour+1;
            minute=minute-60;
        }
        while(hour>=24){

            hour=hour-24;
        }
       // S=second%60;
        //second=S;
        //M=second/60;
        //minute=M+minute;
        //H=minute/60;
        //hour=hour+H;
    }
    Time Add(Time i)
    {
        Time t;
        t.hour=hour+i.hour;
        t.minute=minute+i.minute;
        t.second=second+i.second;
        cout<<t.hour<<"hr"<<endl<<" "<<t.minute<<"min"<<endl<<" "<<t.second<<"sec"<<endl;
        return t;
    }
};
void setTime(int h,int m, int s);
void showTime();
Time Add(Time ti);
int main()
{
    Time t1,t2,t3;
    t1.setTime(5,6,23);
    t2.setTime(3,7,20);
    cout<<endl;
    t1.showTime();
    cout<<endl;
    t3=t2.Add(t1);
    t2.showTime();
    cout<<endl;
    t3.setTime(25,90,68);
    //t3=t1.Add(t2);
     cout<<endl;
    t3.normalize();
    t3.showTime();
    cout<<endl;
    return 0;
}
