#include<bits/stdc++.h>
using namespace std;
void bresenham(double x1,double y1,double x2,double y2)
{
    double m,p,x,y,dx,dy;
    x=x1,y=y1;
    dx=x2-x1;
    dy=y2-y1;
    m=dy/dx;
    bool f=0;
    while(x<=x2)
    {
        f=1;
        cout<<x<<" "<<y<<endl;
        if(p>=0)
        {
            y=y+1;
            x+=1;
            if(m<1)
                p=p+2*dy-2*dx;
            else
                p=p+2*dx-2*dy;
        }
        else
        {
            if(m<1)
            {
                p=p+2*dy;
                x+=1;
            }
            else
            {
                p=p+2*dx;
                y+=1;
            }
        }
    }

    while(x>=x2 && f==0)
    {
        cout<<x<<" "<<y<<endl;
        if(p>=0)
        {
            y=y-1;
            x-=1;
            if(m<1)
                p=p-2*dy+2*dx;
            else
                p=p-2*dx+2*dy;
        }
        else
        {
            if(m<1)
            {
                p=p-2*dy;
                x-=1;
            }
            else
            {
                p=p-2*dx;
                y-=1;
            }
        }
    }
}
int main()
{
    double x1,y1,x2,y2;
    cout<<"Enter input x1 y1 x2 y2"<<endl;
    cin>>x1>>y1>>x2>>y2;
    bresenham(x1,y1,x2,y2);
    return 0;
}
