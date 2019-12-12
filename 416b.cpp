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
int dp[50001][6];
int main()
{
	io;
	int m,n; cin>>m>>n;
	int a[m+1][n+1];
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++) cin>>a[i][j];
	}
	//dp[0][0]=a[0][0];
	for(int i=1;i<=m;i++){
		dp[i][1]=dp[i-1][1]+a[i][1];
	}
	for(int i=1;i<=m;i++){
		for(int j=2;j<=n;j++){
			if(dp[i-1][j]<=dp[i][j-1]){
				dp[i][j]= dp[i][j-1]+a[i][j];
			}
			else{
				dp[i][j]=dp[i-1][j]+a[i][j];
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<< dp[i][n]<<" ";
	}
	return 0;
}	