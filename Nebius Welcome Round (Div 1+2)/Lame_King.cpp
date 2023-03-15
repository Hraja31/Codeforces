#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r,c,min;
        cin>>r>>c;
        r=abs(r);
        c=abs(c);
        if (r==0){min = (c*2)-1;}
        else if (c==0){min = (r*2)-1;}
        else if (r==c){min = r*2;}
        else
        {
            if (r>c){min = (c*2)+(((r-c)*2)-1);}
            else if(c>r){min = (r*2)+(((c-r)*2)-1);}
        }
        cout<<min<<endl;
    }
}
