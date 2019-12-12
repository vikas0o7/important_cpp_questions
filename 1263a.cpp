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
		int a[3];
		cin>>a[0]>>a[1]>>a[2];
		sort(a, a+3);
		int ans=0;
		if(a[0]+a[1]>=a[2]) ans= (a[0]+a[1]+a[2])/2;
		else ans= a[0]+a[1];
		cout<<ans<<endl;

	}
	return 0;
}	