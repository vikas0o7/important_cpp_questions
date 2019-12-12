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
int n,m,k;
vector<int> b;
int main()
{
	io;
	cin>>n>>m>>k;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++){
		b.pb(a[i]-a[i+1]);
	}
	sort(b.begin(),b.end());
	int ans= a[n-1]-a[0];
	for(int i=0;i<k-1;i++){
		ans+= b[i];
		//cout<<b[i]<<endl;
	}
	ans+=k;
	cout<<ans;
	return 0;
}	