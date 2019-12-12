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
	ll n,m;
	cin>>n>>m;
	ll kmax= (n-m+1)*(n-m)/2;
	ll p= n/m;
	ll q= n%m;
	ll ans= q* p*(p+1)/2;
	ans= ans+ ( m-q	)* p*(p-1)/2;
	cout<< ans<< " "<< kmax;
	return 0;
}	