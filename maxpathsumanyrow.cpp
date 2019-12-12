// C++ program to find Maximum path sum 
// start any column in row '0' and ends 
// up to any column in row 'n-1' 
#include<bits/stdc++.h> 
using namespace std; 
#define N 4 
int dp[5][5];
// function find maximum sum path 
int MaximumPath(int a[][N]) 
{ 
	
	//memset(dp,0,sizeof(dp));
	for(int i=0;i<N;i++){
		dp[0][i]=a[0][i]; 
	}
	int ans=0;
	for(int i=1;i<N;i++){
		for(int j=0;j<N;j++){
			int left = (j!=0)? dp[i-1][j-1]:0;
			int right=(j!=N-1)?dp[i-1][j+1]:0;
			int up= dp[i-1][j];
			dp[i][j]= a[i][j]+max(dp[i][j], max(dp[i-1][j-1], dp[i-1][j+1]));
		}

	}
	for(int i=0;i<N;i++){
		ans=max(ans, dp[N-1][i]);
	}
	return ans;
} 

// driver program to test above function 
int main() 
{ 
	int a[4][4] = { { 4, 2 , 3 , 4 }, 
		{ 2 , 9 , 1 , 10}, 
		{ 15, 1 , 3 , 0 }, 
		{ 16 ,92, 41, 44 } 
	}; 

	cout << MaximumPath ( a ) <<endl ; 
	return 0; 
} 
