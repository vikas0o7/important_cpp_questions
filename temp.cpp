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
vector<pair<int,int> > adj[1000];
const int inf=INT_MAX;
int main()
{
	io;
	int n,x,y,z; cin>>n;
	for(int i=0;i<n;i++){
		cin>>x>>y>>z;
		adj[x].pb({z,y});
		adj[y].pb({z,x});
	}
	priority_queue<ii, vector<ii>, greater<ii>  > pq;
	int src,destination;
	cin>>src>>destination;
	int dist[1000];
	for(int i=0;i<n;i++){
		dist[i]=inf;
	}
	dist[src]=0;
	pq.push({0,src});
	while(!pq.empty()){
		auto u= pq.top(); pq.pop();
		for(int i=0;i<adj[u].size();i++){
			auto q= adj[u][i];
			if(q.first> u.first+ dist[u]){
				adj[u][i].first= u.first+dist[u];
				pq.push({adj[u][i].first,u.second});
			}
		}
	}
	cout<< dist[destination];
	return 0;
}	