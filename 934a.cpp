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
ll n,b,m, a[55],c[55];
int main()
{
	io;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		c[i]=-2e18;
	}
	for(int j=0;j<m;j++){
		cin>>b;
		for(int i=0;i<n;i++){
			c[i]=max(c[i],a[i]*b);
		}
	}
	sort(c,c+n);
	cout<<c[n-2];
	return 0;
}	