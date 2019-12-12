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
ll v[290000], n,ans=0;
int main()
{
	io;
	int n; cin>>n;
	for(int i=1;i<=n;i++) cin>>v[i];
	multiset<ll> s;
	for(int i=n;i>0;i--){
		if(v[i]==-1) break;
		
		else{
			s.insert(v[i]);
			if((i& i-1)==0)
			{	ans += *s.begin(); s.erase(s.begin()); // smallest element of this round.
			//cout<< i<<" "<<ans<<endl;
			}
		}
	}	
	cout<<ans;
	return 0;
}	