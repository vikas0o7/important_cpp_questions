#include<bits/stdc++.h>
#define io ios_base::sync_with_stdio(false)
#define mp make_pair
#define pb push_back
using namespace std;
#define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }

void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
	cerr << *it << " = " << a << endl;
	err(++it, args...);
}
typedef long long int ll;
typedef vector< int > vi;
typedef vector< vi > vvi;
typedef pair<int,int> ii;
int main()
{
	io;
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		string ans="";
		int i; int n=s.length();
		for( i=0;i<s.length();i++){
			if(i<n-1 && s[i]!=s[i+1]){
				ans+=s[i];
			}
			else if(i==n-1) ans+=s[i];
			else i++;
		}
		
		sort(ans.begin(),ans.end());
		auto it= unique(ans.begin(),ans.end());
		ans.resize(distance(ans.begin(),it));
		cout<< ans<<endl;
	}
	return 0;
}	