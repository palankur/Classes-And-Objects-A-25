//Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate number of instance member variables and also define instance
//member functions to set values for time and display values of time.
#include<iostream>
using namespace std;
class Time
{
private:
    int a,b,c;
public:
    void setTime(int h,int m,int s)
    {
        a=h;
        b=m;
        c=s;
    }
    void printTime()
    {
        cout<<a<<" hr "<<b<<" min "<<c<<" secs.";
    }

};
int main()
{
    Time t1;
    int hr,mins,sec;
    cout<<"Enter the time in HH:MM:SS format : ";
    cin>>hr>>mins>>sec;
    t1.setTime(hr,mins,sec);
    t1.printTime();
    return 0;
}
