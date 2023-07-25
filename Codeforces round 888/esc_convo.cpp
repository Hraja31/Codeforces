#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,m,k,h;
        int count=0;
        cin>>n>>m>>k>>h;
        for(int i=0;i<n;i++)
        {
            int p; cin>>p;
            if(abs(h-p)%k==0 && abs(h-p)/k <= m-1 && abs(h-p)/k!=0)
                count++;
        }
        cout<<count<<endl;
    }
}