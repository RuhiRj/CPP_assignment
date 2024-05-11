// Define a class Greatest and define instance member function to find Largest among 3 numbers using classes.
#include<iostream>
using namespace std;
class Greatest
{
private:
    int num1,num2,num3;
public:
    void FindGreatest()
    {
        cout<<"enter the three numbers:";
        cin>>num1>>num2>>num3;
        if(num1>num2)
        {
            cout<<"the Greatest number is:"<<num1;
        }
        else if(num2>num3)
            {
                cout<<"the Greatest number is:"<<num2;
            }
        else{
                    cout<<"the Greatest number is:"<<num3;

        }
    }

};
int main()
{
    Greatest g1;
    g1.FindGreatest();
    return 0;
}
