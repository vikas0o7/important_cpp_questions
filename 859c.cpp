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
int a[105],cnt[105],x=0,ans=0, number_of_ones=0;
int main()
{
	io;
	int n; cin>>n;
	for(int i=0;i<n;i++) {
		cin>>a[i];
		if(a[i]==0){
			x++;
			cnt[i]=x;
		}
	}
	for(int i=n-1;i>=0;i--){
		if(a[i]==1) number_of_ones++;
		ans=max(ans, cnt[i]+number_of_ones);
	}
	cout<<ans;
	return 0;
}	