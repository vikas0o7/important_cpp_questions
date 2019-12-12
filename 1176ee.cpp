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
const int num = 200001;
typedef long long ll;
int vis[num],level[num];
vector <int> adj[num],odd,even;
void dfs(int u)
{
	vis[u]=1;
	for(int i=0;i<adj[u].size();i++)
	{
		int cur = adj[u][i];
		if(!vis[cur])
			level[cur]=1+level[u],dfs(cur);
	}
}
int main()
{
	io;
	int t,u,v,n,m;
	cin >> t;
	while(t--){
		cin>>n>>m;
		for(int i=0;i<m;i++){
			cin>>u>>v;
			adj[u].pb(v);
			adj[v].pb(u);
		}
		dfs(1);
		for(int i=1;i<=n;i++){
			if(level[i]&1==0) even.pb(i);
			else odd.pb(i);
		}
		if(odd.size()<=n/2){
			cout<<odd.size()<<endl;
			for(int i=0;i<odd.size();i++){
				cout<< odd[i]<<" ";
			}
		}
		else{
			cout<<even.size()<<endl;
			for(int i=0;i<even.size();i++){
				cout<< even[i]<<" ";
			}
		}
		cout<<endl;
		//memset(vis,0,sizeof(vis));
		odd.clear(); even.clear();
		for(int i=0;i<n+1;i++) vis[i]=0,level[i]=0;
		for(int i=1;i<n+1;i++)	adj[i].clear();
	}
	return 0;
}	