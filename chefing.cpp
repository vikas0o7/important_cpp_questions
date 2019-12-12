#include<bits/stdc++.h>
#define io ios_base::sync_with_stdio(false)
#define mp make_pair
#define pb push_back
using namespace std;
typedef long long int ll;
int main()
{
	io;
	int t;
	cin>>t; 
	while(t--){
		int n; cin>>n; int j=n,cnt=0;
		map<char,int> m;
		while(n--){
			string s; cin>>s;
			bool vis[26];
			memset(vis,false,26);
			for(int i=0;i<s.length();i++){
				if(vis[s[i]-'a']==false){m[s[i]]++; vis[s[i]-'a']=true;}
			}
		}
		for(auto it= m.begin();it!=m.end();it++){
			if(it->second==j) cnt++;
		}
		cout<<cnt<<endl;
	}
	return 0;
}	