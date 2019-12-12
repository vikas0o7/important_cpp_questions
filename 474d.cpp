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
const int mod=1000000007;
ll a[100005], sum[100005]; int k;
void solve(){
	sum[0]=1;
	for(int i=1;i<=100000;i++){
		if(i<k) a[i]=1;
		else if(i==k) a[i]=2;
		else a[i]=(a[i-1]+a[i-k])%mod;
		sum[i]=(sum[i-1]+a[i])%mod;

	}
}

int main()
{
	io;
	int t; cin>>t>>k;
	 solve();
	while(t--){
		int a, b; cin>>a>>b;
		cout<<(sum[b]-sum[a-1]+mod)%mod<<endl;   /// to prevent negative output add mod and take %mod;
	}
	//error(sum[0]);
	return 0;
}	