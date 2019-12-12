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
bool vis[200005];
int maxi=-1;
vector<int> adj[200005];

void dfs(int p){
	maxi= max(maxi, p);
	vis[p]=true;
	for(auto x: adj[p]){
		if(!vis[x])dfs(x);
	}
}
int main()
{
	io;
	int x, y, n, m; cin>>n>>m;
	for(int i=1;i<=m;i++){
		cin>>x>>y;
		adj[x].pb(y);
		adj[y].pb(x);
	} int cnt=0;
	for(int i=1;i<=n;i++){
		if(!vis[i]){
			if(maxi>i) cnt++;
			dfs(i);
		}
	}
	cout<< cnt;
	return 0;
}	