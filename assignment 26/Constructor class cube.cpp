//Define a class Cube and calculate Volume of Cube and initialize it using constructor.
#include<iostream>
using namespace std;
class swapp
{
private:
    int l,b;
public:
    swapp(int a,int c)
    {
        l=a;
        b=c;
    }
    void ()
    {
        int d;
        d=l;
        l=b;
        b=d;
       cout<<"swapping number is="<<l<<" "<<b;
    }
};
int main()
{
    swapp c(2,9);
    c.calculatevolume();
    cout<<endl;
    return 0;
}
