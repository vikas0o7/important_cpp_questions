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
		ll a, b, c;
		cin>>a>>b>>c;
		if(a>b) swap(a,b);
		ll lcm= a*b/( __gcd(a,b));
		ll x= lcm/a -1;
		ll y= lcm/b-1;
		ll ans=0;
		ans= x/(y+1);
		if(x%(y+1)) ans++;
		if(ans>=c) cout<<"REBEL"<<endl;
		else cout<<"OBEY"<<endl;
	}
	return 0;
}	



// int g= __gcd(a,b);
// 		int gap= b-g;
// 		int x= ceil(gap/a);