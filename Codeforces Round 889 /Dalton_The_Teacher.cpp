#include <iostream>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int c=0;
        for(int i=1;i<=n;i++)
        {
            int p;cin>>p;
            if (p==i) c++;
        }
        if (c%2==0)
            cout<<c/2<<endl;
        else
            cout<<c/2+1<<endl;
    }
}
