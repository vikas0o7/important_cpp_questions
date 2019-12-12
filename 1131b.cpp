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
	ll n,x,b; cin>>n;
	ll ans=1,flag=1;
	vector<pair<ll,ll> > a;
	for(int i=0;i<n;i++){
		cin>>x>>b;
		a.pb({x,b});
		if(i==0 && a[i].first!=0 && a[i].second!=0) {ans+=min(x,b); continue;}
		
		if(a[i-1].first>a[i-1].second){
			if(min(x,b)>=a[i-1].first){
				ans+=min(x,b)-a[i-1].first+1;
			}
		}
		else if(a[i-1].second>a[i-1].first){
			if(min(x,b)>=a[i-1].second){
				ans+=min(x,b)-a[i-1].second+1;
			}
		}
		else if(a[i-1].second==a[i-1].first){
			if(min(x,b)>a[i-1].second){
				ans+=min(x,b)-a[i-1].second;
			}
		}

}
 cout<<ans;
	return 0;
}	