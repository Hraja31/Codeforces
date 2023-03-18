#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,x1,y1;
        cin>>x>>y>>x1>>y1;
        x = x1-x;
        y = y1-y;
        //cout<<x<<" "<<y<<endl;
        if (x==0 && y==0) {cout<<0;}
        else if(y<0) {cout<<-1;}
        else if(y==0 && x>0) {cout<<-1;}
        else if(y==0 && x<0) {cout<<abs(x);}
        else if(x==y && x>0) {cout<<x;}
        else if(x==0){cout<<(2*y);}
        else if(x>0 && x>y) {cout<<-1;}
        else if(x>0 && x<y) {cout<<(2*y)-abs(x);}
        else if(x<0) {cout<<(abs(x)+2*y);}
        cout<<endl;
    }
}
