//Define a class Area and define instance member functions to find the area of the different shapes like square, rectangle , circle etc.
#include<iostream>
using namespace std;
class Area
{
private:
    float length,breath,radius,side;
public:
    void setSide(float a)
    {
        side=a;
    }
    void setLengthBreath(float l,float b)
    {
        length=l;
        breath=b;
    }
    void setRadius(float r)
    {
        radius=r;
    }
    float areaOfSquare()
    {
        return side*side;
    }
    float areaOfRectangle()
    {
        return length*breath;
    }
    float areaOfcircle()
    {
        return 3.14*radius*radius;
    }
};
int main()
{
    Area ar;
    float a,l,b,r;
    cout<<"Enter the side of the square : ";
    cin>>a;
    cout<<"Enter length and breath of rectangle : ";
    cin>>l>>b;
    cout<<"Enter radius of the circle : ";
    cin>>r;
    ar.setSide(a);
    cout<<"Area of square is : "<<ar.areaOfSquare();
    ar.setLengthBreath(l,b);
    cout<<"\nArea of rectangle is : "<<ar.areaOfRectangle();
    ar.setRadius(r);
    cout<<"\nArea of circle is : "<<ar.areaOfcircle();
    return 0;

}
