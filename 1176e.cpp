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
	int t ;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int x,y;
		vector<int> adj[n];
		for(int i=0;i<m;i++ ){
			cin>>x>>y;
			adj[x].pb(y);
			adj[y].pb(x);
		}
		queue<int> q;
		q.push(1);
		vector<int> odd, even;
		int dist[n];
		dist[1]=0;
		bool vis[n];
		memset(vis,0,sizeof(vis));
		while(!q.empty()){
			int u=q.front(); q.pop();
			for(int i=0;i<adj[u].size();i++){
				int z=adj[u][i];
				if(!vis[x]) {
					q.push(z);
					dist[z]= dist[u]+1;
					if(dist[z]%2==0) even.pb(z);
					else odd.pb(z);
				}
			}
		}
		//if(odd.size()>even.size()) swap(odd, even);
		cout<< odd.size()<<endl;
		// for(auto it: odd) cout<< it<<" ";
		// 	cout<<endl;
	}
	return 0;
}	