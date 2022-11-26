//Define a class LargestNumber and define an instance member function to find the Largest of three Numbers using the class.
#include<iostream>
using namespace std;
class LargestNumber
{
private:
    int a,b,c,large;
public:
    void setN(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
    }
    int getN()
    {
        return a,b,c;
    }
    int getLargest()
    {
        return large;
    }
    int calculateLargest()
    {
        if(a>b&&a>c){
            large=a;
        }
        else if(b>a&&b>c){
            large=b;
        }
        else
            large=c;
    }
};
int main()
{
    LargestNumber l;
    int a,b,c;
    cout<<"Enter three numbers to find the largest one : ";
    cin>>a>>b>>c;
    l.setN(a,b,c);
    l.calculateLargest();
    cout<<"The largest number between "<<l.getN()<< "is "<<l.calculateLargest();
    return 0;
}
