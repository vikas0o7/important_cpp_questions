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
int dp[100][100];
int main()
{
	io;
	string s,t; cin>>s>>t;
	int m=s.length(); int n=t.length();
	for(int i=0;i<=m;i++){
		for(int j=0;j<=n;j++){
			if(i==0) dp[i][j]=j;          //if length of 1st string=0, add all elements of string 2;
			else if(j==0) dp[i][j]=i;          // ----------------- remove all elements of string 1;
			else if(s[i-1]==t[j-1]) dp[i][j]=dp[i-1][j-1];        // if equal characters, then skip.
			else dp[i][j]=1+ min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1])); 
		}
	}
	cout<<dp[m][n]<<'\n';
	return 0;
}	