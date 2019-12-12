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
ll a[65];
const int m = 1000000007;
ll powmod(){
	a[0]=1;
	for(int i=1;i<=64;i++){
		a[i]=(2*a[i-1])%m;
	}
}
int main()
{
	io;
	cin.tie(NULL);
	int t;cin>>t;
	powmod();
	while(t--){
		ll n; cin>>n;
		n=n%m;
		ll x= (a[n-1]* n)%m;
		cout<<x<<'\n';
	}
	return 0;
}	