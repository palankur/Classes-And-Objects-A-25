//Define a class Rectangle and define an instance member function to find the area of the rectangle.
#include<iostream>
using namespace std;
class Rectangle
{
private:
    int area,length,breath;
public:
    int setData(int l,int b)
    {
        length=l;
        breath=b;
    }
    int getArea()
    {
        return area;
    }
    void CalculateArea()
    {
        area=length*breath;
    }
};
int main()
{
    Rectangle ar;
    int l,b;
    cout<<"Enter length and breath of the rectangle : ";
    cin>>l>>b;
    ar.setData(l,b);
    ar.CalculateArea();
    cout<<"Area of the rectangle is : "<<ar.getArea();
    return 0;

}
