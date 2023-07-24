    #include <iostream>
    using namespace std;
    int func(int arr[],int n)
    {   
        int ld = INT_MAX;
        for(int i=0;i<n-1;i++)
        {
            if(arr[i+1] - arr[i]<ld)
                ld = arr[i+1]-arr[i];
        }
        return ld;
    }
    int main()
    {
        int t; cin>>t;
        while(t--)
        {
            int n; cin>>n;
            int arr[n];
            for (int i=0;i<n;i++)
                cin>>arr[i];
            int num = func(arr,n);
            if (num<0)
                cout<<0<<endl;
            else
                cout<<(num/2)+1<<endl;
        }
    }

