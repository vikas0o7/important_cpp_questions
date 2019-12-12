    #include "bits/stdc++.h"
     
    using namespace ::std;
     
    string str;
    map< int,int >mp;
     
    int main()
    {
        int test, n;
        cin >> n;
        int res(0);
     
        while(n--)
        {
            cin >> str;
            int q(0), r(0);
        for(auto ch : str) (ch == '(')? q++:q--, r = min(r,q);
                cout<< r<< " "<<q<<endl; 
            if(r < 0 and r < q) continue;   // means need closing on both sides;
     
            if(mp[-q]) ++res,mp[-q]--;
            else mp[q]++;
         //  cout<< r<< " "<<q<<endl;
        }
        cout << res;
    }