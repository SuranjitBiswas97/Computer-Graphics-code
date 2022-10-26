#include<bits/stdc++.h>
using namespace std;
int main()
{

    double m,dx,dy,x,y,x1,y1,x2,y2;
    cout<<"Enter input x1 y1 x2 y2"<<endl;
    cin>>x1>>y1>>x2>>y2;
    dx=x2-x1;
    dy=y2-y1;
    m=dy/dx;
    y=y+m*dx;
    x=x+dy/m;
    if(m<=1)
    {
        x=x1;
        y=y1;
        while(x<x2)
        {
            y=y+m;
            x=x+1.0;
            double z=round(y);
            if(abs(y-z)<=0.1)
                cout<<x<<" "<<y<<endl;
        }

    }
    else
    {
        x=x1;
        y=y1;
        while(y<y2)
        {
            x=x+(1.0/m);
            y=y+1.0;
            double z=round(x);
            if(abs(x-z)<=0.1)
                cout<<x<<" "<<y<<endl;
        }
    }
}
