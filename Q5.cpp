//Define a class ReverseNumber and define an instance member function to find Reverse of a Number using class.
#include<iostream>
using namespace std;
class ReverseNumber
{
private:
    int actualNumber,reverseNumber;
public:
    void setactualNumber(int x)
    {
        actualNumber=x;
    }
    int getactualNumber()
    {
        return actualNumber;
    }
    int getreverseNumber()
    {
        return reverseNumber;
    }
    void CalculatereverseNumber()
    {
        int rev=0,rem;
        while(actualNumber!=0)
        {
            rem=actualNumber%10;
            reverseNumber=reverseNumber*10+rem;
            actualNumber=actualNumber/10;
        }
    }
};
int main()
{
    ReverseNumber r;
    int x;
    cout<<"Enter any number : ";
    cin>>x;
    r.setactualNumber(x);
    r.CalculatereverseNumber();
    cout<<"Reverse of the "<<r.getactualNumber()<<" is : "<<r.getreverseNumber();
    return 0;
}
