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
	int q; cin>>q;
	while(q--){
		int n,k; cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		int mn=INT_MAX, mx=0;
		for(int i=0;i<n;i++){
			mn= min(mn, a[i]+k);
			mx= max(mx, a[i]-k);
		}	
		if(mn<mx) cout<<-1<<endl;
		else cout<< mn<<endl;
	}
	return 0;
}	