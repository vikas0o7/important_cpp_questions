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
vector<int> adj[100005];
int vis[100005];
set<int> s;
vector<int> ans;      
int main()
{
	io;
	int n,m; cin>>n>>m;
	int x,y;
	for(int i=0;i<m;i++){
		cin>>x>>y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	s.insert(1);
	while(!(s.empty())){
		int v= *s.begin();
		vis[v]=1;
		ans.pb(v);
		s.erase(s.begin());
		for(auto it: adj[v]) if(!vis[it]) s.insert(it);
	}
for(auto x: ans) cout<<x<< " ";
return 0;
}	
