//Define a class Circle and define an instance member function to find the area of the circle.
#include<iostream>
using namespace std;
class Circle
{
private:
    float area;
    int radius;
public:
    void setData(int r)
    {
        radius=r;
    }
    float getArea()
    {
        return area;
    }

    float CalculateArea()
    {
        area=3.14*radius*radius;
    }
};
int main()
{
    Circle ar;
    int r;
    cout<<"Enter the radius of the circle : ";
    cin>>r;
    ar.setData(r);
    ar.CalculateArea();
    cout<<"Area of the circle is : "<<ar.getArea();
    return 0;

}
