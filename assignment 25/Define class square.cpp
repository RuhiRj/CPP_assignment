// Define a class Square to find the square of a number and write a C++ program to Count number of times a function is called.
#include<iostream>
using namespace std;
class Square
{
private:
    int number;
    int Count;
public:
    int Squarenumber()
    {
        int Sq=0;
        cout<<"enter the number:";
        cin>>number;
        Count+=1;
        return number*number;
        cout<<"square of a number is ="<<Sq;
        cout<<"square of a number is ="<<Count;
    }
    int GetCount()
    {
        return Count;
    }
};
int main()
{
    Square s1;
    int n;
    cout<<"enter the number:";
    cin>>n;
    while(n){
    std::cout<<"square of the no is "<<endl<<s1.Squarenumber()<<endl;
    n-=1;
    }
    //std::cout<<"square of the no is "<<endl<<s1.Squarenumber()<<endl;
    //std::cout<<"square of the no is "<<endl<<s1.Squarenumber()<<endl;
    //std::cout<<"square of the no is "<<endl<<s1.Squarenumber()<<endl;
    std::cout<<"total count of the function call is:"<<s1.GetCount();
    return 0;
}
