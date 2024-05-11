// Define a class ReverseNumber and define an instance member function to find Reverse of a Number using class.
#include<iostream>
using namespace std;
class ReverseNumber
{
private:
    int number;
public:
    void ReverseNo()
    {
        int rev=0,rem;
        cout<<"enter the number:";
        cin>>number;
        while(number)
        {
        rem=number%10;
        rev=(rev*10)+rem;
        number=number/10;
       // return rev;
        }
        cout<<"Reverse number is =:"<<rev;
    }
   // void ShowRevno()
    //{
      //  cout<<"Reverse number is =:"<<number;
    //}
};
int main()
{
    ReverseNumber r1;
    r1.ReverseNo();
  //  r1.ShowRevno();
    return 0;
}
