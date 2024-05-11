/* Create a class CString to represent a string.
a) Overload the + operator to concatenate two strings. b) == to compare 2 strings.*/
#include<iostream>
#include<string>
#include<cstring> // for strcpy
using namespace std;

class Cstring
{
private:
    char str[20];

public:
    void setData(const char st[])
    {
        strcpy(str, st);
    }

    void getData()
    {
        cout << str << endl;
    }

    Cstring operator+( Cstring st2)
    {
        Cstring temp;

        strcpy(temp.str, str);
        strcat(temp.str, st2.str);
        return temp;
    }
    bool operator==(Cstring stt)
    {
        return strcmp(str,stt.str)==0;
    }
};

int main()
{
    Cstring s1, s2, s3,s4;
    s1.setData("ruhi");
    s2.setData("ruhi");
    s3.setData("prakash");
    s4 = s1.operator+(s3);
    s1.getData();
    s2.getData();
    s4.getData();
    cout<<endl;
    if (s1 == s2) {
        cout << "s1 and s2 are equal" << endl;
    } else {
        cout << "s1 and s2 are not equal" << endl;
    }

    if(s2==s3)
    {

        cout<<"s2 and s3 are same"<<endl;
       } else{
            cout<<"s2 and s3 are not same";
    }
cout<<endl;
    return 0;
}
