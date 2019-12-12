#include<bits/stdc++.h>
#define io ios_base::sync_with_stdio(false)
#define mp make_pair
#define pb push_back
#define inf 0x3f3f3f3f
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
vector<ii> g[20]; 
int x,y,z,w; vector<int>vec; int sum=0;
int main()
{
	io;
	int m,n; cin>>n>>m;
	vector<int> key(n,inf);
	vector<int> parent(n,-1);
	vector<bool>vis(n,false);
	for(int i=0;i<m;i++){
		cin>>x>>y>>w;
		g[x].pb({y,w}); g[y].pb({x,w});
	}
	priority_queue<ii, vector<ii> , greater<ii> > pq;
	pq.push({0,0});
	key[0]=0; vec.pb(0);
	while(!pq.empty()){
		int u= pq.top().second; pq.pop();
		vis[u]=true;
		for(auto i=g[u].begin();i!=g[u].end();i++){
			int v=i->first;
			int w= i->second;
			if(key[v]>w && vis[v]==false){
				key[v]=w;
				pq.push({key[v],v});
				parent[v]=u;
				vec.pb(v);
				
			}
		}
	}
	sum=0;
	// Print edges of MST using parent array 
	for(int i=1;i<9;i++){
		cout<< parent[i]<<" "<<i<< " "<< key[i]<<endl;
		sum+=key[i];
	}
	cout<<sum<<endl;
	return 0;
}	