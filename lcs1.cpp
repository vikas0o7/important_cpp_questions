#include <iostream>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n,m; string s,t;
	    cin>>n>>m;
	    cin>>s>>t;
	    int dp[n+1][m+1];
	    // for(int i=0;i<=n;i++){
	    // 	for(int j=0;j<=m;j++){
	    // 		dp[i][j]=0;
	    // 	}
	    // }
	     for(int i=0;i<=n;i++){
	        for(int j=0;j<=m;j++){
	            if(i==0|| j==0) dp[i][j]=0;
	            else if(s[i-1]==t[j-1]){
	                dp[i][j]=1+ dp[i-1][j-1];
	            }
	            else dp[i][j]= max(dp[i-1][j],dp[i][j-1]);
	        }
	    }
	    cout<<dp[n][m]<<endl;
	}
	return 0;
}