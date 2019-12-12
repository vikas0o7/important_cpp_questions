#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
 {
	int t; cin>>t;
	while(t--){
	int n; cin>>n;
	int a[n];
	    for(int i=0;i<n;i++){
	    cin>>a[i];
	    }
	int m; cin>>m;
	int dp[n+1][m+1];
	for(int i=0;i<=n;i++) dp[0][i]=1;
	for(int i=0;i<=m;i++) dp[i][0]=0;
	for(int i=1;i<=n;i++){
	    for(int j=1;j<=m;j++){
	        if(j>=a[i-1]){
	            dp[i][j]= dp[i-1][j]+ dp[i][j-a[i]];
	        }
	        else dp[i][j]= dp[i-1][j];
	    }
	}
	cout<< dp[n][m]<<endl;
	
	
    }
	
	
	return 0;
}