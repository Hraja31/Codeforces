#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,x,p;
        bool flag=false;
        cin>>n>>x>>p;
        if (x==0){x=n;}
        for(long long i=1;i<=min(10*n,p);i++){
        if((x+(i*(i+1))/2)%n==0){
            flag = true;
            //cout<<i<<endl;
        }
    }
        if (flag==true) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}
