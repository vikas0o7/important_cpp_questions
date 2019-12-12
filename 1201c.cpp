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
	vector<int> a(n);
	for(ll i=0;i<n;i++) cin>>a[i];
	sort(a.begin(),a.end());
	ll i=n/2, mid=n/2, ans=a[mid];
	for(;i<n-1 && k>0;i++){
		
		if( k>(a[i+1]-a[i])*(i+1-mid)){
			ans= a[i+1];
			k= k- (a[i+1]-a[i])*(i+1-mid);
		}
		else{
			ans= ans+k/(i-mid+1);
			k=0;
		}
		//error(k);
	}
	//error(i,n)
	if(i==n-1 && k>0) ans+=k/(mid+1);
	cout<<ans;
	return 0;
}	