//Define a class Factorial and define an instance member function to find the Factorial of a number using class.
#include<iostream>
using namespace std;
class Factorial
{
private:
    int f;
    int facto;
public:
    void setN(int x)
    {
        f=x;
    }
    int getN()
    {
        return f;
    }
    int getFactorial()
    {
        return facto;
    }
    int calculateFactorial()
    {
        int m,fact=1;
        if(f<=0)
        {
            facto=1;
            return 1;
        }
        for(m=1;m<=f;m++){
        fact=fact*m;
        }
        facto=fact;
    }

};
int main()
{
    Factorial f;
    int x,i;
    cout<<"Enter any number for factorial : ";
    cin>>x;
    f.setN(x);
    f.calculateFactorial();
    cout<<"Factorial of "<<f.getN()<<" is : "<<f.getFactorial();
    return 0;
}
