#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,x2,y1,y2,m,b,x,y;
    scanf("%d %d %d %d\n",&x1,&y1,&x2,&y2);
    m=(y2-y1)/(x2-x1);
    b=y1-(m*x1);
    //if(m<0) m=m*-1;
    while(x!=x2&&y!=y2)
    {
        for(int i=1;i<=x2;i++)
        {
            x=i;
            y=m*x+b;
            printf("%d %d\n",x,y);
        }
    }
}
