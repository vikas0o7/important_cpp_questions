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
int dp[2005][2005];
const int m=1e9+7;
int main()
{
	io;
	int n,t; cin>>n>>t;
	dp[0][1]=1;
	for(int i=1;i<=t;i++){
		for(int j=1;j<=n;j++){
			for(int k=j;k<=n;k+=j){
				dp[i][k]=(dp[i][k]+dp[i-1][j])%m;  /// just a way to sum all sequences of length i-1 ending 
			}										//with divisors of k, without calculating any divisors;		
		}
	}
	int ans=0;
	for(int i=1;i<=n;i++){
		ans=(ans+dp[t][i])%m; // sum of all (number of sequences) of length t ending with a digit i
	}							// and we are summing all those i's;
	cout<<ans<<endl;
	return 0;
}	