#include<bits/stdc++.h>
#define io ios_base::sync_with_stdio(false)
#define mp make_pair
#define pb push_back
#define n 3
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
int dp[n][n]; int path=-1;
int longest(int mat[][n], int dp[][n], int i, int j){
	if(i<0 || j<0 || i>n-1||j>n-1) return 0 ;
	if(dp[i][j]!=-1) return dp[i][j];
	if(j<n-1 && (mat[i][j+1]==1+mat[i][j])) return  dp[i][j]= 1+longest(mat,dp,i,j+1); 
	if(i<n-1 && (mat[i+1][j]==1+mat[i][j])) return dp[i][j]= 1+longest(mat,dp,i+1,j); 
	if(j>0 && (mat[i][j-1]==1+mat[i][j])) return dp[i][j]= 1+longest(mat,dp,i,j-1); 
	if(i>0 && (mat[i-1][j]==1+mat[i][j])) return dp[i][j]= 1+longest(mat,dp,i-1,j); 
	return dp[i][j]=1;
}
int ans(int mat[n][n]){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++) dp[i][j]=-1;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(dp[i][j]==-1){
				dp[i][j]=longest(mat,dp,i,j); 
			}
				path =max(path, dp[i][j]);
		}
	}
	return path;
}
int main() 
{   
	//cin>>n;
   int  mat[n][n] = {{1, 2, 9}, 
                    {4, 5, 8}, 
                    {3, 6, 7}}; 

   cout << "Length of the longest path is "<< ans(mat); 
   return 0; 
} 