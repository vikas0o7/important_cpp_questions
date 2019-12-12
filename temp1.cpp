#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string smallestnumber(ll n){
    if(n>=0 && n<=9) return to_string(n);
    stack<int> st;
    for(int i=9;i>=2 && n>1;i--){
        //cout<< i<<endl;
        while(n%i==0){
            st.push(i);
            n/=i;
           // cout<< i<<endl;
        }
    }
    if(n!=1) return "-1";
    string k;
    while(!st.empty()){
        k+= to_string(st.top());
        st.pop();
    }
    return k;
}
int main()
 {
	int t; cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	   cout<< smallestnumber(n);
	    cout<<endl;
	    //while(!st.empty()) st.pop();
	}
	
	
	return 0;
}
