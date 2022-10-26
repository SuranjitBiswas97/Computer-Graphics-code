#include<bits/stdc++.h>
using namespace std;
void midPointCircleDraw(int x_centre, int y_centre, int r)
{
    int x = r, y = 0;
    int P = 1 - r;
    cout<<"Pk:"<<P<<endl;
    cout<<"("<<x<<","<<y<<")"<<endl;
    while (x > y)
    {
        y++;
        if (P <= 0)
            P = P + 2*y + 1;
        else
        {
            x--;
            P = P + 2*y - 2*x + 1;
        }
        if (x < y)
            break;
        cout<<"Pk: "<<P<<endl;
        cout<<"("<<x<<","<<y<<")"<<endl;
    }
}
int main()
{
    int x,y,r;
    cin>>x>>y>>r;
    midPointCircleDraw(x,y,r);
    return 0;
}
