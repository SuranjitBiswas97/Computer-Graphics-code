#include<bits/stdc++.h>
using namespace std;
void midPointCircleDraw(int x_centre, int y_centre, int r)
{
    int x = 0, y = r;
    int P = 1 - r;
    ///cout<<"Pk:"<<P<<endl;
    /// cout<<"("<<x<<","<<y<<")"<<endl;
    while (y > x)
    {
        cout<<"Pk: "<<P<<endl;
        x++;
        if (P <= 0)
            P = P + 2*x + 1;
        else
        {
            y--;
            P = P + 2*x - 2*y + 1;
        }
        if (y < x)
            break;

        cout<<"Other 3 coordinates: "<<endl;
        cout<<"("<<-x<<","<<y<<")"<<endl;
        cout<<"("<<-x<<","<<-y<<")"<<""<<endl;
        cout<<"("<<x<<","<<-y<<")"<<""<<endl;

    }
}
int main()
{
    int x,y,r;
    cout<<"Enter Center:"<<endl;
    cout<<"X:";
    cin>>x;
    cout<<"Y:";
    cin>>y;
    cout<<"Enter Radius:";
    cin>>r;
    midPointCircleDraw(x,y,r);
    return 0;
}

