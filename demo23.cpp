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
int x,n;
void dfs(vector<int> adj[100], int u , bool vis[]){
	vis[u]=true;
	for(auto it: adj[u]){
		if(!vis[it]) dfs(adj,it, vis );
	}
}

bool isconnected(vector<int> adj[100]){
	bool vis[55];
	memset(vis,false,sizeof(vis));
	int i;
	for(i=0;i<n;i++){
		if(adj[i].size() >0) break; 
	}
	if(i==n) return true;
	dfs(adj, i, vis);
	for(int i=0;i<n;i++){
		if(!vis[i] && adj[i].size()>0){
			return false;
		}
	}
	return true;
}
int main()
{
	io;
	int t; cin>>t;
	while(t--){
		cin>>n;
		vector<int> adj[100];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>x;
				if(x==1){
					adj[i].push_back(j);
				}
			}
		}
		if(isconnected(adj)==false){
			cout<< 0<<endl; continue;
		}
		int odd=0;
		for(int i=0;i<n;i++){
			if(adj[i].size() & 1) odd++;
		}
		if(odd>2) cout<< 0<<endl;
		else if(odd==2) cout<< 1<<endl;
	}
	return 0;
}	