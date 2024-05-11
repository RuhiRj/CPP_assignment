/*Define a class Bill and define its member function get() to take detail of customer , calculateBill()
function to calculate electricity bill using below tariff : up to 100 unit RS. 1.20 per unit
From 100 to 200 unit RS. 2 per unit Above 200 units RS. 3 per unit.*/
#include<iostream>
using namespace std;
class Bill
{
private:
    string customerName;
    int customerID;
    int unit_consumed;

public:
    getData()
    {
        cout<<"enter the customer name:";
        cin>>customerName;
        cout<<"enter the customerID:";
        cin>>customerID;
        cout<<"enter the units consumed:";
        cin>>unit_consumed;
    }
    void calculateBill()
    {
        float billAmount;
        if (unit_consumed <= 100)
        {
            billAmount = unit_consumed * 1.20;
        }
        else if (100 > unit_consumed <= 200)
        {
            billAmount =(unit_consumed) * 2.00;
        }
        else
        {
            billAmount = (unit_consumed ) * 3.00;
        }
        cout << "Electricity bill for customer " <<customerName<<" (ID: " << customerID << ") is: Rs. " << billAmount << endl;
    }
};
int main()
{
    Bill b;
    b.getData();
    b.calculateBill();
    return 0;
}
