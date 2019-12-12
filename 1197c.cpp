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
	ll n,k; cin>>n>>k;
	ll a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	vector<int> v;
	for(int i=1;i<n;i++){
		v.pb(a[i-1]-a[i]);
	}
	sort(v.begin(),v.end());
	ll ans=a[n-1]-a[0];
	for(int i=0;i<k-1;i++) ans+=v[i];
	cout<< ans;	
	return 0;
}	