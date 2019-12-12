// A Dynamic Programming based C++ Program for the Egg Dropping Puzzle 
# include <bits/stdc++.h> 
# include <limits.h> 
using namespace std;
int eggDrop(int n, int k){
	int dp[n+1][k+1];
	for(int i=0;i<=n;i++){
		dp[i][0]=0;
	}
	for(int i=0;i<=n;i++){
		dp[i][1]=1;
	}
	for(int i=1;i<=k;i++){
		dp[1][i]=i;
	}
	int res=INT_MAX;
	for(int i=2;i<=n;i++){
		for(int j=2;j<=k;j++){
			dp[i][j]=INT_MAX;
			for(int x=1;x<=j;x++){
				res= 1+max(dp[i-1][x-1], dp[i][j-x]);
			if(res<dp[i][j])
				dp[i][j]=res;
			}
		}
	}
	return dp[n][k];
}

/* Driver program to test to pront printDups*/
int main() 
{ 
	int n = 2, k = 10; 
	printf ("Minimum number of trials in worst case with %d eggs and "
			"%d floors is %d \n", n, k, eggDrop(n, k)); 
	
	return 0; 
} 
