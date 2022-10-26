///Mid Point Circle Drawing Algorithm in Reverse
///For 1,3,4,6,7,8
#include<bits/stdc++.h>
using namespace std;
void midPointCircleDraw(int x_centre, int y_centre, int r)
{
    int x = 0, y = r;
    int P = 1 - r;
    ///cout<<"Pk:"<<P<<endl;
   /// cout<<"("<<x<<","<<y<<")"<<endl;
   vector<int>pk,xv,yv;
    while (y > x)
    {

        pk.push_back(P);
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
        xv.push_back(x);
        yv.push_back(y);


    }

    for(int i=pk.size();i>=0;i--)
    {
        cout<<"PK:";
        cout<<pk[i]<<endl;
        cout<<"Other 3 coordinates: "<<endl;
        cout<<"("<<-xv[i]<<","<<yv[i]<<")"<<endl;
        cout<<"("<<-xv[i]<<","<<-yv[i]<<")"<<""<<endl;
        cout<<"("<<xv[i]<<","<<-yv[i]<<")"<<""<<endl;
        cout<<"----------------------------------"<<endl;
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

