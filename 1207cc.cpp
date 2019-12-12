#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007LL
#define eps 1e-8
 
using namespace std;
 
ll dp[200005][2]={};
 
int main()
{
	cin.tie(0),ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--)
	{
		ll n,a,b;
		cin>>n>>a>>b;
		string s;
		cin>>s;
		dp[0][0]=b;dp[0][1]=1LL<<60;
		for(int i=1;i<=n;i++)
		{
			dp[i][1]=min(dp[i-1][1]+a,dp[i-1][0]+a+a)+b+b;
			if(i==n||(s[i]=='0'&&s[i-1]=='0'))
				dp[i][0]=min(dp[i-1][1]+a+a,dp[i-1][0]+a)+b;
			else
				dp[i][0]=1LL<<60;
			cout<<i<<" "<<dp[i][0]<<" "<< dp[i][1]<<endl;
		}
		cout<<dp[n][0]<<"\n";
	}
return 0;
}