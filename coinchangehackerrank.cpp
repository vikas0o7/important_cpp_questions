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
const int inf= 10000000;
int main()
{
	io;
	ll n,x; cin>>n>>x;
	vector<int> v(x);
	for(int i=0;i<x;i++) cin>>v[i];
	int dp[n+1]; memset(dp,0,sizeof(dp));
	 dp[0]=1;

	//error(dp[8]);
	for(int i=1;i<=n;i++){
		for(int j=0;j<x;j++){
			if(i-v[j]>=0){
				dp[i]+=dp[i-v[j]];
			}
		}
		
	}	
	cout<<dp[n];
	return 0;
}	