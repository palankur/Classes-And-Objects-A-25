//Define a class Complex to represent a complex number. Declare instance member variables to store real and imaginary part of a complex number,
//also define instance member functions to set values of complex number and print values of complex number
#include<iostream>
using namespace std;
class Complex
{
private:
    int a,b;
public:
    void setData(int r,int i)
    {
        a=r;
        b=i;
    }
    void printData()
    {
        cout<<a<<" + "<<b<<"i\n";
    }
};
int main()
{
    Complex c1,c2;
    int x,y,p,q;
    cout<<"Enter the real and imaginary part of first number : ";
    cin>>x>>y;
    cout<<"Enter the real and imaginary part of second number :";
    cin>>p>>q;
    c1.setData(x,y);
    c2.setData(p,q);
    c1.printData();
    c2.printData();
    return 0;
}
