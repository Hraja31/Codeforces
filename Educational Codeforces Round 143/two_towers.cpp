    #include <iostream>
    using namespace std;
    int main()
    {
        int t; cin>>t;
        while(t--)
        {
            int c1=0,c2=0,len1,len2,i;
            string str1,str2;
            cin>>len1>>len2;
            cin>>str1;
            cin>>str2;
            for(i=0;i<len1-1;i++)
            { if (str1[i] == str1[i+1]) c1++;}
            for(i=0;i<len2-1;i++)
            { if (str2[i] == str2[i+1]) c2++;}
     
            if(c1+c2>1) cout<<"NO"<<endl;
            else if (str1[len1-1] == str2[len2-1] && c1+c2 != 0) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
