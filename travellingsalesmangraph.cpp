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
const int inf= INT_MAX;
int main()
{
	io;
	int t ; cin>>t;
	while(t--){
		int N,x; cin>>N;
		vector<pair<int,int> >adj[N];
		for(int i=0;i<N;i++){
			for(int j=0;j<N;j++){
				cin>>x;
				adj[i].push_back({j,x});
			}
		}
		vector<bool> vis(N,false);
		priority_queue<ii, vector<ii>, greater<ii> > pq;
		pq.push({0,0});
		vector<int> key(N,inf);
		key[0]=0;
		while(!pq.empty()){
			int u = pq.top().second; pq.pop();
			vis[u]=true;
			for(auto i= adj[u].begin();i!=adj[u].end();i++){
				int v= i->first;
				int wt=i->second;
				if(vis[v]==false && key[v]>wt){
					//vis[v]=true;
					key[v]=wt;
					pq.push({key[v],v});
				}
			}
		}
		int sum=0;
		for(int i=0;i<N;i++){
			sum+=key[i];
		}
		int mn= INT_MAX;
		for(int i=1;i<N;i++){
			mn= min(mn, adj[i][0].second);
		}
		cout<<sum+mn<<endl;
	}
	return 0;
}	