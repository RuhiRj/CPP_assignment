/*Consider following class Numbers
class Numbers
{
int x,y,z; public: // methods
};
Overload the operator unary minus (-) to negate the numbers.*/
#include<iostream>
using namespace std;
class Numbers
{
private:
    int x,y,z;
public:
    void setData(int a,int b,int c)
    {
        x=a;
        y=b;
        z=c;
    }
    void getData()
    {
        cout<<x<<" "<<y<<" "<<z;
    }
    Numbers operator-()
    {
        Numbers temp;
        temp.x=-x;
        temp.y=-y;
        temp.z=-z;
        return temp;
    }
};
int main()
{
    Numbers n1,n2,n3;
    n1.setData(3,4,5);
    n2.setData(23,45,66);
    n3=-n2;
    n3.getData();
    cout<<endl;
    return 0;
}
