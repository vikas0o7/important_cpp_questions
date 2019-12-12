#include<bits/stdc++.h>
#define io ios_base::sync_with_stdio(false)
#define pb push_back
using namespace std;
int main()
{
	io;
	int t; cin>>t;
	while(t--){
		int n; string s; cin>>n>>s;
		vector<int>v;
		for(int i=0;i<n;i++){
			if(s[i]==s[0]) v.pb(i);
		}
		int k=1;
		while(k<=n && s[k]!=s[0]) k++;
		int ans=1;
		while(ans+1<=k){
			for(auto i: v){
				if(ans+i>=n) goto there;
				if(s[ans+i]!=s[ans]) goto there;
			}
			ans++;
		}
		there: 
			cout<<s.substr(0,ans)<<endl;
	}
	return 0;
}	