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
	int t; cin>>t;
	while(t--){
		int n; cin>>n; int a[n+1],d[n+1];
		for(int i=1;i<=n;i++) cin>>a[i];
		for(int i=1;i<=n;i++) cin>>d[i];
		int ans=-1;
		if(a[2]+a[n]<d[1]) ans=d[1];
		if(a[1]+a[n-1]<d[n])ans=max(ans,d[n]);
		//error(d[1],d[n]);
		for(int i=2;i<=n-1;i++){
			if(a[i-1]+a[i+1]<d[i]) ans=max(ans,d[i]);
		}	
		cout<<ans<<'\n';
	}
	return 0;
}	