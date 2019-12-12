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
		int n,x; cin>>n;
		vector<int> v(n);
		for(int i=0;i<n;i++){
			//cin>>x;
			cin>>v[i];
		}
		sort(v.rbegin(),v.rend());
		int ans=1;
		for(int i=1;i<=n;i++){
			ans = max(ans, min(i,v[i-1]));
		}
		cout<<ans<<endl;
	}
	return 0;
}	