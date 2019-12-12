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
int a[1001],l[1001],r[1001];
int main()
{
	io;
	int n; cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	l[1]=0,r[n]=0;
	for(int i=2;i<=n;i++){
		if(a[i]>=a[i-1]){
			l[i]= l[i-1]+1;
		}
		else l[i]=0;
	}	
	for(int i=n-1;i>=1;i--){
		if(a[i]>=a[i+1]){
			r[i]=r[i+1]+1;
		}
		else r[i]=0;
	}
	int ans=0;
	for(int i=1;i<n+1;i++){
		ans= max(ans, l[i]+r[i]);
	}
	cout<<ans+1;
	return 0;
}	