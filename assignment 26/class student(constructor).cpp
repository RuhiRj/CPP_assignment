/* Define a class student and write a program to enter student details using constructor and
define member function to display all the details.*/
#include<iostream>
using namespace std;
class student
{
private:
    int s_no;
    string enroll_no;
    string name;
    string section;
public:
    student(int s_n,string enroll_n,string nam,string sec)
    {
        s_no=s_n;
        enroll_no=enroll_n;
        name=nam;
        section=sec;
    }
    void displayStudentinfo()
    {
        cout<<"student all details is: "<<s_no<<" "<<enroll_no<<" "<<name<<" "<<section;
    }
};
int main()
{
    student s(1,"lncdmca1194","ruhi","B");
    s.displayStudentinfo();
    return 0;
}
