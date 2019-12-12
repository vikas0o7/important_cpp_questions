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
		int n; cin>>n;
		int a[n+2];
		 a[n+1]=-1, a[0]=INT_MAX;
		vector<int> v;
		for(int i=1;i<=n;i++) cin>>a[i];
		for(int i=1;i<=n;i++){
			if(a[i-1]>a[i] && a[i+1]>a[i]) v.pb(i);
		}	
		for(int i=1;i<=n;i++){
			if(a[i-1]<a[i] && a[i+1]<a[i]) v.pb(i);
		}	
		sort(v.begin(),v.end());
		if(v.size()<2) cout<<"No Profit";
		else {for(int i=0;i+1<v.size();i+=2) cout<<"("<<v[i]-1<<" "<<v[i+1]-1<<")"<<" ";}
		cout<<endl;	
	}		
	return 0;
}	