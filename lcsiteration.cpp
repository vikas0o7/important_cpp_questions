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
    
	string s,t;
	cin>>s>>t;
	int m=s.length(); int n=t.length();
	for(int i=0;i<=m;i++){
		for(int j=0;j<=n;j++){
			if(i==0 ||  j==0)continue; // had to do this so dp[-1][0]or dp[0][-1]condition not formed.
			if(s[i-1]==t[j-1]) dp[i][j]= 1+ dp[i-1][j-1]; 
			else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
			//error(dp[i][j])
		}

	}
	
	int index=dp[m][n];
	char lcs[index+1];
	lcs[index]='\0'; // otherwise printing lcs will give some junk value at end of string;
	int i=m,j=n;
	while(i>0 && j>0){
		if(s[i-1]==t[j-1]){
			lcs[index-1]=s[i-1]; i--;j--; index--;
		}
		else if(dp[i-1][j]>dp[i][j-1]) i--;
		else j--;
	}
	cout<< lcs<<'\n';
	cout<<dp[m][n];
	return 0;
}	