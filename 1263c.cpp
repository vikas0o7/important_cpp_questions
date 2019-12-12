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
void solve(int n, vector<int> &v){
	v.push_back(0);
	for(int i=1;i*i<=n;i++){
		if(n/i!=i){
			v.push_back(i);
			v.push_back(n/i);
		}
		else v.push_back(i);
	}
	return ;
}
int main()
{
	io;
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		vector<int> v;
		solve(n,v);
		sort(v.begin(),v.end());
		cout<< v.size()<<endl;	
		for(auto i: v) cout<< i<<" ";
		cout<<endl;	
	}
	return 0;
}	