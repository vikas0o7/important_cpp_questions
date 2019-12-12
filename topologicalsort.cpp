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
vector<int> g[10]; bool vis[10]; int level[10]; int n;
stack<int> st;
void dfs(int u){
	vis[u]=true;
	for(int i=0;i<g[u].size();i++){
		if(!vis[g[u][i]]) dfs(g[u][i]);
	}
	st.push(u);
}
int main()
{
	io;
	int m,x,y; 
	 cin>>n>>m;
	 int z=n; /// dont use same n twice becoz you are already decreasing it in dfs function.
	while(m--){           /////// so it will become zero in line 36; so use int z=n;
		cin>>x>>y; g[x].pb(y);
		//g[y].pb(x);
	}
	for(int i=1;i<=n;i++){
		if(!vis[i]) dfs(i);
	}
	//for(int i=1;i<=z;i++) cout<<level[i]<<" ";
	while(!st.empty()){
		cout<< st.top()<<" "; st.pop();
	}
	return 0;
}	