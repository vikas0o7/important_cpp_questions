#include<bits/stdc++.h>
#define io ios_base::sync_with_stdio(false)
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
bool vis[500005];
vector<int> adj[500005];
map<int,int> cnt;
void dfs1(int u, int &c){
	vis[u]=true;
	//cout<< u<<" ";
	c++;
	for(int i=0;i<adj[u].size();i++){
		int x= adj[u][i];
		if(!vis[x]) dfs1(x, c);
	}
	vis[u]=false;
}
void dfs2(int u,int c){
	vis[u]=true;
	cnt[u]=c;
	for(int i=0;i<adj[u].size();i++){
		int x=adj[u][i];
		if(!vis[x]) dfs2(x,c);
	}
}
int main()
{
	io;
	int n,m; cin>>n>>m;
	int k,x;
	//vector<int> lst[n+1];
	
	for(int i=0;i<m;i++){
		cin>>k;
		//cout<<k<<endl;
		if(k>=1){
			int x,y; cin>>y;
			//adj[x].pb(y);adj[y].pb(x);
			for(int j=1;j<k;j++){
				cin>> x;
				adj[x].pb(y);
				adj[y].pb(x);
				y=x;
			}
		}
		else if(k=0) continue;
		//else if(k==1) {int q; cin>>q; continue;}
	}
	//cout<< adj[7].size();
	// bool vis[n+1];
	// memset(vis,false,sizeof(vis));
	for(int i=1;i<=n;i++){
		int c=0;
		if(!vis[i]) {
			//int c=0;
			dfs1(i,c);
			//cout<<endl;
			//error(i,c);
			//int sz=c;
			dfs2(i,c);
			
		}

	}
	for(int i=1;i<=n;i++) cout<< cnt[i]<<" ";
	return 0;
}	