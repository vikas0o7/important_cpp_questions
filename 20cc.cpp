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
bool vis[10];vector<int> adj[10],g[10];
stack<int>st;
void dfs1(int u){
	vis[u]=true;
	for(int i=0;i<adj[u].size();i++){
		if(!vis[adj[u][i]]){
			dfs1(adj[u][i]);
		}
	}
	st.push(u);
}
void dfs2(int u,vector<int> &ans){
	vis[u]=true;
	ans.pb(u);
	for(int i=0;i<g[u].size();i++){
		if(!vis[g[u][i]]) dfs2(g[u][i], ans);
	}
	
}
int main()
{
	io;
	int n,m,x,y; cin>>n>>m;
	memset(vis,false,sizeof(vis));
	while(m--){
		cin>>x>>y;
		adj[x].pb(y); /////////directed graph rhta hai strongly connected compo. me
		g[y].pb(x);
	}
	dfs1(0);
	// while(!st.empty()){
	// 	cout<<st.top()<<endl; st.pop();        // to check ordering of elements in stack
	// }
	int cnt=0;
	memset(vis,false,sizeof(vis));
	while(!st.empty()){
		int a=st.top(); st.pop();
		if(!vis[a]){ cnt++;
			//cout<<'\n';
			vector<int> ans;
			dfs2(a,ans);
			for(auto it: ans) cout<< it<<" ";
			cout<<'\n';	
		}
	}
	cout<< "there are "<<cnt<<" strongly connected components"<<endl;
	return 0;
}	