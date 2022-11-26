//Define a class Square to find the square of a number and write a C++ program to Count number of times a function is called
#include<iostream>
using namespace std;
class Square
{
private:
    int x,square;
    static int count;
public:
    void setX(int a)
    {
        x=a;
    }
    int getX()
    {
        return x;
    }
    int getSquare()
    {
        return square;
    }
    int getCount()
    {
        return count;
    }
    void CalculateSquare()
    {
        square=x*x;
        count++;
    }

};
int Square::count=0;
int main()
{
    Square s;
    int a;
    cout<<"Enter the number : ";
    cin>>a;
    s.setX(a);
    s.CalculateSquare();
    s.CalculateSquare();
    cout<<"The square of "<<s.getX()<<" is "<<s.getSquare()<<" and the function is called "<<s.getCount()<<" times ";
    return 0;

}
