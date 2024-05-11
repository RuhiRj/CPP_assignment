//4. Define a class Counter and Write a program to Show Counter using Constructor.
#include<iostream>
using namespace std;
class counter
{
private:
    int n;
public:
    counter(int m)
    {
        n=m;
    }
    void showCount()
    {
        int i,count=0;
        for(i=0; i<n; i++)
            count+=1;
        cout<<"counting the value is: "<<count ;
    }
};
int main()
{
    counter c(90986);
    c.showCount();
    return 0;
}
