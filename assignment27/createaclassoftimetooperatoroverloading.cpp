/* Create a class Time which contains: - Hours - Minutes - Seconds Write a C++ program using operator overloading for the following:
1.  = = : To check whether two Times are the same or not.
 2.  >>  : To accept the time. 3.  <<  : To display the time.*/
 #include<iostream>
 using namespace std;
 class Time
{
    private:
    int Hours;
    int Minutes;
    int Second;
    public:
    bool operator==(Time t)
    {
        if(Hours==t.Hours && Minutes==t.Minutes && Second==t.Second)
            return true;
        else
            return false;
    }
    void setData(int h,int m,int s)
    {
         Hours=h;
         Minutes=m;
         Second=s;
    }
    friend istream& operator>>(istream& in ,Time& t);
    friend ostream& operator<<(ostream& out,Time& t);
};
istream& operator>>(istream& in ,Time& t)
{
    cout<<"enter hour:";
    in>>t.Hours;
    cout<<"enter minute:";
    in>>t.Minutes;
    cout<<"enter second:";
    in>>t.Second;
    return in;
}
ostream& operator<<(ostream& out , Time& t)
{
    out<<"hours are=:"<<t.Hours<<" "<<"minutes are=:"<<t.Minutes<<" "<<"seconds are=:"<<t.Second<<endl;
    return out;
}
int main()
{
    Time t1,t2,t3;
//    cout<<"enter the first time ***************************\n:";
//    cout<<"enter the hour:"<<endl;
//    cin>>t1.Hours;
//    cout<<"enter the minutes:"<<endl;
//    cin>>t1.Minutes;
//    cout<<"enter the second:";
//    cin>>t1.Second;
//    cout<<"Hours:"<<t1.Hours<<endl;
//    cout<<"Minutes:"<<t1.Minutes<<endl;
//    cout<<"Second:"<<t1.Second;
//    cout<<"enter the second time $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n:";
//    cout<<"enter the hour:"<<endl;
//    cin>>t2.Hours;
//    cout<<"enter the minutes:"<<endl;
//    cin>>t2.Minutes;
//    cout<<"enter the second:";
//    cin>>t2.Second;
//     cout<<"Hours:"<<t2.Hours<<endl;
//    cout<<"Minutes:"<<t2.Minutes<<endl;
//    cout<<"Second:"<<t2.Second;
//    t3=t1.operator==(t2);
//     cout<<"Hours:"<<t3.Hours<<endl;
//    cout<<"Minutes:"<<t3.Minutes<<endl;
//    cout<<"Second:"<<t3.Second;
//        cout<<"times are same:";
    t1.setData(2,30,40);
    t2.setData(24,30,40);
    if(t1==t2)
        cout<<"time are same:";
    else
        cout<<"time are not same:";
    cout<<endl;
    cin>>t3;
    cout<<endl;
    cout<<t3;
    return 0;
}
