#include <iostream>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        string d;
        string num;
        cin>>n>>d;
        cin>>num;
        for(int i=0;i<n;i++)
        {
            if(num[i]<d[0])
            {
                num.insert(i,d);
                cout<<num<<endl;
                break;
            }
            if (i == n-1)
                cout<<num<<d<<endl;
        }
        
    } 
}
