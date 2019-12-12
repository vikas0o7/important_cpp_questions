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

ll n,k;
vector<ll> a(200005);
bool check(ll x){
	ll sum=0;
	for(int i=n/2;i<n;i++){
	if(x-a[i]>0)	sum+=(x-a[i]);
		if(sum>k) return false;
	}
	if(sum<=k) return true;
	else return false;
}
int main()
{
	io;
	ll n,k; cin>>n>>k;
	vector<int> a(n);
	for(ll i=0;i<n;i++) cin>>a[i];
	sort(a.begin(),a.end());
	ll l=1,r= 2000000000;
	while(l<r){
		ll mid= (l+r)/2;
		if(check(mid)==true){
			l=mid;
		}
		else{
			r= mid-1;
		}
	}
	cout<< l;

	return 0;
}	