#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
 {
	int t; 
	while(t--){
	    int n,w;
	    cin>>n>>w;
	    int val[n+1],wt[n+1];
	    int dp[n+1][w+1];
	    for(int i=0;i<=n;i++){
	        for(int j=0;j<=w;j++){
	            if(i==0|| j==0) dp[i][j]=0;
	            if(wt[i-1]<=i){
	                dp[i][j]= max(val[i-1]+dp[i-1][j-wt[i-1]], dp[i-1][j]);
	            }
	        }
	    }
	    cout<< dp[n][w]<<endl;
	}
	
	
	return 0;
}