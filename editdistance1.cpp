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
	int t; 
	cin>>t;
	while(t--){
	    int n,m; 
	    cin>>n>>m;
	    string s,t;
	    cin>>s>>t;
	    int dp[105][105],ans=INT_MAX;
	     for(int i=0;i<=n;i++){
	        for(int j=0;j<=m;j++){
	        	if(i==0) dp[i][j]=j;
	        	else if(j==0) dp[i][j]=i;
	           else  if(s[i-1]==t[j-1]) dp[i][j]=dp[i-1][j-1];       
	           	else dp[i][j]= 1+min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1])); 
	    	}
		}
	    cout<<dp[n][m]<<endl;
	}
	return 0;
}	