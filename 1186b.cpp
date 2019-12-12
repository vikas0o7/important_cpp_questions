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
	ll n,m; cin>>n>>m;
	ll ans=0;
	if(n>m) swap(n,m);
	while(n>0){
		if(n==1) {ans+=(m+1)/3;n--;}
		else if(n==2){ans+=(m+1)/2; n-=2;}
		else{
			ans= ans+ (n/3)*(m+1)/2;
			n= n%3;
		}
	}
	cout<<ans;
	return 0;
}	