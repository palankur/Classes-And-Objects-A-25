#include<iostream>
using namespace std;
class Greatest
{
private:
    int x,y,z,max;
public:
    void setX(int a,int b,int c)
    {
        x=a;
        y=b;
        z=c;
    }
    int getgreatest()
    {
        return max;
    }
    void findGreatest()
    {
        if(x>y&&x>z)
            max=x;
        if(y>x&&y>z)
            max=y;
        else
            max=z;
    }
};
int main()
{
    Greatest g;
    int a,b,c;
    cout<<"Enter three numbers to find the greatest : ";
    cin>>a>>b>>c;
    g.setX(a,b,c);
    g.findGreatest();
    cout<<"The greatest number among the entered number is : "<<g.getgreatest();
    return 0;

}
