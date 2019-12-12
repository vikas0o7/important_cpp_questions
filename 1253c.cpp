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
int main()
{
	io;
	int n, k; cin>>n>>k;
	ll a[n+5], sum[n+5]; // memory limit will exceed with this she
	memset(sum,0,sizeof(sum));
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1, a+n+1); ll x=0;
	vector<ll> ans(k+1,0);
	for(int i=1;i<=n;i++){
		ans[i%k]+=a[i];
		x+=ans[i%k];
		cout<< x<<" ";
	}
	return 0;
}	