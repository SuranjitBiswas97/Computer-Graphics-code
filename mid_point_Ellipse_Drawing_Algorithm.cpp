#include<bits/stdc++.h>
using namespace std;
int main()
{
    float x,y,xc,yc,rx,ry,pk,pk1;
    printf("Mid point ellipse drawing algorithm\n");
    printf("Enter Center for ellipse\nx : ");
    scanf("%f",&xc);
    printf("y : ");
    scanf("%f",&yc);
    printf("Enter x-radius and y-radius\nx-radius : ");
    scanf("%f",&rx);
    printf("y-radius : ");
    scanf("%f",&ry);
    x=0;
    y=ry;
    cout<<"Region 1:"<<endl;
    cout<<"--"<<endl;
    cout<<"--"<<endl;
    pk=(ry*ry)-(rx*rx*ry)+((rx*rx)/4);
    while((2*x*ry*ry)<(2*y*rx*rx))
    {
        cout<<"PK:"<<pk<<endl;
        if(pk<=0)
        {
            x=x+1;
            pk1=pk+(2*ry*ry*x)+(ry*ry);
        }
        else
        {
            x=x+1;
            y=y-1;
            pk1=pk+(2*ry*ry*x)-(2*rx*rx*y)+(ry*ry);
        }
        pk=pk1;

        cout<<"Other Three Quadrants:"<<endl;
        cout<<"x:"<<-x<<" ,y:"<<y<<endl;
        cout<<"x:"<<-x<<" ,y:"<<-y<<endl;
        cout<<"x:"<<x<<" ,y:"<<-y<<endl;
        cout<<"--"<<endl;

    }
    cout<<endl<<endl;
    cout<<"Region 2:"<<endl;
    cout<<"--"<<endl;
    cout<<"--"<<endl;

    pk=((x+0.5)*(x+0.5)*ry*ry)+((y-1)*(y-1)*rx*rx)-(rx*rx*ry*ry);
    while(y>0)
    {
        cout<<"PK:"<<pk<<endl;
        if(pk>0)
        {
            y=y-1;
            pk1=pk-(2*rx*rx*y)+(rx*rx);
        }
        else
        {
            x=x+1;
            y=y-1;
            pk1=pk+(2*ry*ry*x)-(2*rx*rx*y)+(rx*rx);
        }
        pk=pk1;

        cout<<"Other Three Quadrants:"<<endl;
        cout<<"x:"<<-x<<" ,y:"<<y<<endl;
        cout<<"x:"<<-x<<" ,y:"<<-y<<endl;
        cout<<"x:"<<x<<" ,y:"<<-y<<endl;
        cout<<"--"<<endl;

    }

}
