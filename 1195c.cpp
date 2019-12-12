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
ll a[5][100005],dp[5][100005];
int main()
{
	io;
	ll n; cin>>n;
	for(int i=1;i<=2;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}

	dp[1][1]= a[1][1]; dp[2][1]= a[2][1];
	dp[1][2]= (a[2][1]+a[1][2]); dp[2][2]=(a[2][2]+a[1][1]);
	for(int j=3;j<=n;j++){
		for(int i=1;i<=2;i++){
			int k;
			if(i==1) k=2;
			else k=1;
			dp[i][j]= max(dp[k][j-1]+a[i][j], dp[k][j-2]+ a[i][j]);
			//error(i,j,k,dp[i][j]);
		}
	}
	//cout<< a[1][3]+a[2][1];
cout<< max(dp[1][n],dp[2][n]);
	return 0;
}	