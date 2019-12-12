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
int n, k, ans=INT_MAX;
map<int, vector<int> > m;

void solve(int x){
	int cnt=1;
	while(x>0){
	x/=2;
	
	m[x].pb(cnt);
	cnt++;
}
}
int main()
{
	io;
	cin>>n>>k;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
		m[a[i]].pb(0);
		solve(a[i]);
	}
	for(int i=0;i<=200000;i++){
		vector<int> v= m[i];
		if(v.size()<k) continue;
		else{
			sort(v.begin(),v.end());
			int temp=0;
			for(int i=0;i<k;i++) temp+=v[i];
			ans= min(ans, temp);	
		}
	}
	cout<<ans;
	return 0;
}	