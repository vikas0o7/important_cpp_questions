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
const int mod=1e9+7;

ll solve(ll n){
	ll odd=0,even=0,s=0,j=1, i;
	for(i=1;s<n;i*=2){
		ll add= min(n-s,i);
		s+=add;
		if(j==1) odd+=add;
		else even+=add;
		j^=1;
	}
	even%=mod; odd%=mod;
	ll ans= (odd*odd) + even*(even+1);
	ans%=mod;
	return ans;
}

int main()
{
	io;
	ll l,r; 
	cin>>l>>r;
	cout<< (solve(r)-solve(l-1)+mod)%mod;
	return 0;
}	