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
const int mod= 1e9+7;
int pw(ll a, ll b){
	int ans=1;
	while(b){
		if(b&1) ans= 1LL*ans*a %mod;
		a= a*a%mod;
		b/=2;
	}
	return ans;
}
int main()
{
	io;
	ll n,m; 
	cin>>n>>m;
	ll sum=0;
	sum+= pw(2,m)-1;
	//cout<<sum<<endl;
	sum= pw(sum,n);
	cout<<sum;
	return 0;
}	