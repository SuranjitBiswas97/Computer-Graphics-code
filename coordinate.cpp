#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=2,b=3,c,d;
    cin>>c>>d;
    while(true)
    {
        c=c-2;
        d=d-3;
        cout<<c<< " "<<d<<endl;
        if (a==c && b==d)
        {
            return 0;
        }
    }
}
