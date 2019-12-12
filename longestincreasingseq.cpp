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
int dp[100];
int main()
{
	io;
	int n; cin>>n;
	vector<int> a(n,0);
	int ans=-1;
	dp[0]=1;
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=1;i<n;i++){
		dp[i]=1;
		for(int j=0; j<i;j++){
			if(a[i]>a[j] && dp[j]+1>dp[i]){   // dp[j]+1 >dp[i] condition to check if length of longest sequence will increase or not when considering jth element.
				dp[i]=dp[j]+1;
				
			}

		}
		ans=max(ans,dp[i]);
		//error(ans,i)
	}	
	cout<<"ans = "<<ans<<endl;
	int index=ans;
	int v[index];
	// for(int i=n-1;i>=0;i--){
	// 	if()
	// }
	return 0;
}	