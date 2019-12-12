    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        long long int n,q,i,l,sum=0,b;
        cin>>n>>q;
        long long int a[n];
        for(i=0;i<n;i++)cin>>a[i];
        for(i=1;i<n;i++)a[i]+=a[i-1];
        for(i=0;i<q;i++)
        {
            cin>>b;
            sum+=b;
            if(sum>=a[n-1])sum=0;
            l=upper_bound(a,a+n,sum)-a;
            cout<< l<<endl;
            //cout<<n-l<<endl;
        }
        
        return 0;
    }