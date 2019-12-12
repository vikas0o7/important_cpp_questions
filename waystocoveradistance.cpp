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
int dp[10000];

// int steps(int n){
// 	if(n==2) return 2;
// 	if(n==1 || n==0) return 1;
// 	return (steps(n-1)+steps(n-2)+steps(n-3));   // O(3^n) will timeout for n=300
// }
int main()
{
	io;
	int n; cin>>n;
	dp[0]=1; dp[1]=1; dp[2]=2;
	for(int i=3;i<=n;i++){
	 dp[i]+=dp[i-1]+dp[i-2]+dp[i-3];		
	}
	cout<<dp[n];                 // O(n); will not timeout for even n=3000;
	//error(steps(n));
	return 0;
}	