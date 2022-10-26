#include<bits/stdc++.h>
using namespace std;
int main()
{
    double m,b,x,y,dx,dy,x1,y1,x2,y2;
    cout<<"Enter input x1 y1 x2 y2"<<endl;
    cin>>x1>>y1>>x2>>y2;
    dx=x2-x1;
    dy=y2-y1;
    m=dy/dx;
    b=y1-m*x1;
    if(m<0)
        m=m*(-1);
    x=x1;
    y=y1;
    if(m>1)
    {
        while(y<y2)
        {
            x++;
            y=m*x+b;
            cout<<x<<" "<<y<<endl;
        }


    }
    else
    {
        while(x<x2)
        {
            y++;
            x=(y-b)/m;
            cout<<x<<" "<<y<<endl;
        }
    }

}
