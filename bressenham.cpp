#include<stdio.h>
using namespace std;
int main()
{
    double x1,y1,x2,y2,m,pk,x,y,dx,dy;
    scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
    dx=(x2-x1);
    dy=(y2-y1);
    m=dy/dx;
    if(m<0.0) m=m*-1;
    x=x1;
    y=y1;
    printf("(%.2f %.2f)\n",x,y);
    if(m<=1.0)
    {
        pk=2*dy-dx;
        while(x!=x2&&y!=y2)
        {
            if(pk>=0.0)
            {
                x=x+1;
                y=y+1;
                pk=pk+2*(dy-dx);
                printf("(%.2f %.2f)\n",x,y);
            }
            else
            {
                x=x+1;
                y=y;
                pk=pk+2*dy;
                printf("(%.2f %.2f)\n",x,y);

            }

        }

    }
    else
    {
        pk=2*dx-dy;
        while(x!=x2&&y!=y2)
        {


            if(pk>=0.0)
            {
                x=x+1;
                y=y+1;
                pk=pk+2*(dx-dy);
                printf("(%.2f %.2f)\n",x,y);
            }
            else
            {
                x=x;
                y=y+1;
                pk=pk+2*dx;
                printf("(%.2f %.2f)\n",x,y);
            }
        }
    }

}
