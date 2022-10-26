#include<stdio.h>
using namespace std;
int main()
{
    double x1,y1,x2,y2,m,b,x,y,dx,dy;
    scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
    dx=(x2-x1);
    dy=(y2-y1);
    if(m<0.0) m=m*-1;
    m=dy/dx;
    if(m>1.0)
    {
        x=x1;
        y=y1;
        printf("(%.2f %.2f)\n",x,y);
        while(y!=y2)
        {
            x=x+(1/m);
            y=y+1;
            printf("(%.2f %.2f)\n",x,y);
        }
    }
    else
    {
        x=x1;
        y=y1;
        printf("(%.2f %.2f)\n",x,y);
        while(x!=x2)
        {
            x=x+1;
            y=y+m;
            printf("(%.2f %.2f)\n",x,y);

        }
    }

}
