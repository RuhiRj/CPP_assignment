//10. Write a C++ program to add all the numbers of an array of size 10.
#include<iostream>
using namespace std;
int main()
{
    int arr[10],i,sum=0;
    cout<<"enter the ten number of an array:";
    for(i=0; i<=9; i++)
        cin>>arr[i];
    for(i=0; i<=9; i++)
    {
        sum=sum+arr[i];
    }
    cout<<sum;
    return 0;
}
