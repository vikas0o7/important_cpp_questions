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
ll dp[200005][2]={};
int main()
{
	io;
	ll t; cin>>t;
	while(t--){
		ll n,a,b;
		cin>>n>>a>>b;
		string s; cin>>s;
		dp[0][0]=b; dp[0][1]=1LL<<60;
		for(int i=1;i<=n;i++){
			dp[i][1]= min(dp[i-1][0]+a+a, dp[i-1][1]+a)+b+b;
			if(i==n|| (s[i]=='0' && s[i-1]=='0')){
				dp[i][0]= min(dp[i-1][1]+a+a, dp[i-1][0]+a)+b;
			}
			else dp[i][0]=1LL<<60;
		}
		cout<< dp[n][0]<<endl;
	}
	return 0;
}	