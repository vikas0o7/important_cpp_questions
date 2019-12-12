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
const ll INF= 100000000000000;   
ll p[100010],dist[100010];  // parent adnd distance 
void f (int ix)
{
	if (ix!=1) f(p[ix]);
	cout<<ix<<' ';
}
int main()
{
	io;	
	int m,n,x,y,z; cin>>n>>m;
	list<pair<int,int> > adj[100010];  /////// adjacency list of vertices not edges.. mff
	for(int i=0;i<=100010;i++) {
	dist[i]=INF;
	p[i]=i; //// initially saare vertex apne parent khud hi hain
	}
	while(m--){
		cin>>x>>y>>z; 
		adj[x].pb({y,z}); adj[y].pb({x,z});  // z is weight of edge and x,y are the vertices
	}
	priority_queue< ii, vector< ii >, greater< ii > > pq; /// standard way to define min heap of pairs using pq;
	pq.push(make_pair(0,1));
	dist[1]=0;
	while(!pq.empty()){
		int u=pq.top().second; pq.pop();
		//error(u)
		list< pair<int, int> >::iterator itr; 
		for(itr= adj[u].begin();itr!=adj[u].end();itr++){
			int v= itr->first;
			ll weight= dist[u]+(itr->second);
			if(dist[v]>weight){
				dist[v]=weight;
				p[v]=u;
				pq.push(make_pair(dist[v],v));
				
			}
		}
	 }
	if(dist[n]==INF) cout<<-1; // it means we could not reach this vertex. 
	else{
		f(n);
		 }
	cout<<'\n';		 
	cout<< dist[n]<<" ";	 // shortest between 1st and nth vertex;
return 0;
}	