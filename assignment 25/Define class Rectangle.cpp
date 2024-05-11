// Define a class Rectangle and define an instance member function to find the area of the rectangle.
using namespace std;
class Rectangle
{
private:
    int length,breadth;
public:
    void AreaRectangle()
    {
        //int area;
        cout<<"enter the length and breadth:";
        cin>>length>>breadth;
        //length*breadth;
        cout<<"area of the rectangle:"<<length*breadth;
    }
};
int main()
{
    Rectangle r1;
   // std::cout<<"area of the rectangle:"<<r1.AreaRectangle()<<endl;
    r1.AreaRectangle();
    return 0;
}
