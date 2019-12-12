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
	int t ;cin>>t;
	while(t--){
		int a,b,c; cin>>a>>b>>c;
		int ans=0;
		int g= min(b, c/2);
		ans+=(3*g);
		b-=g; 
		g= min(a,b/2);
		ans+=(3*g);
		cout<<ans<<endl;
	}
	return 0;
}	