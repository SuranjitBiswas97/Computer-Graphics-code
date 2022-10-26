#include<stdio.h>
using namespace std;
int main()
{
    int x,y,x1,y1,m,r,pk;
    scanf("%d",&r);
    x=0;
    y=r;
    pk=1-r;
    printf("%d %d\n",x,y);
    while(x<y)
    {
        if(pk>=0)
        {
            x1=x;
            y1=y;
            x=x+1;
            y=y-1;
            pk=pk+2*x+(y*y-y1*y1)+(y1-y)+1;
            printf("%d %d\n",x,y);
        }
        else
        {
            x1=x;
            y1=y;
            x=x+1;
            y=y;
            pk=pk+2*x+(y*y-y1*y1)+(y1-y)+1;
            printf("%d %d\n",x,y);
        }
    }

}
