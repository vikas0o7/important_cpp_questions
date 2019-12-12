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
bool vis[100005]; vector<int> v;
int cnt=0;
void dfs(int u){
		if(vis[u]==false){
		sort(adj[u].begin(),adj[u].end());
		vis[u]=true;
		v.pb(u);
	}
	
	for(int i=0;i<adj[u].size();i++){
		int z=adj[u][i];
		if(vis[z]==false){
			dfs(z);
		}
	}
}

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
	memset(vis,false,sizeof(vis));

	dfs(1);
	//cout<<v.size();
	for(auto it: v) cout<< it<<" ";
		//cout<<adj[4].size();
	return 0;
}	