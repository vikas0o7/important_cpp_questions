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
	int n; cin>>n;
	vector<int> a(n);
	map<int, vector<int> > m;
	for(int i=0;i<n;i++){
		cin>> a[i];
		m[a[i]].pb(i);
	}
	vector<ii> ans;
	for(auto i= m.begin();i!=m.end();i++){
		int x= i->first;
		vector<int> v= i->second;
		if(v.size()==1){
			ans.pb({x,0}); continue;
		}
		else if(v.size()==2){
			ans.pb({x,v[1]-v[0]});
			continue;
		}
		set<int> s;
		for(int i=1;i<v.size();i++){
			s.insert(v[i]-v[i-1]);
		}
		if(s.size()==1) ans.pb({x,v[1]-v[0]});
		s.clear();
	}
	sort(ans.begin(),ans.end());
	cout<< ans.size()<<endl;
	for(auto it: ans) cout<< it.first<<" "<< it.second<<endl;
	return 0;
}	