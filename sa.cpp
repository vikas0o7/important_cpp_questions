#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define mp make_pair
#define rlp(i,a,b) for(int i=a;i>b;i--)
#define ft first
#define sd second
#define pii pair<int,int>
#define all(vect) sort(vect.begin(),vect.end())
#define rall(vect) sort(vect.rbegin(),rend()) 
const int num = 200001;
typedef long long ll;
int vis[num],level[num];
vector <int> adj[num],odd,even;
void dfs(int u)
{
	vis[u]=1;
	rep(i,0,adj[u].size())
	{
		int cur = adj[u][i];
		if(!vis[cur])
			level[cur]=1+level[u],dfs(cur);
	}
}
int main()
{
	int t,u,v,n,m;
	cin >> t;
	while(t--)
	{
		cin >> n >> m;
		rep(i,0,m)
		{
			cin >> u >> v;
			adj[u].pb(v);
			adj[v].pb(u);
		}
		dfs(1);
		rep(i,1,n+1)
		{
			if(level[i]&1)odd.pb(i);
			else even.pb(i);
		}
		if(odd.size()<=(n/2))
		{
			cout << odd.size() << "\n";
			rep(i,0,odd.size())
				cout << odd[i] << " ";
		}
		else
		{
			cout << even.size() << "\n";
			rep(i,0,even.size())
				cout <<	even[i] << " ";
		}
		cout << "\n";
		odd.clear();
		even.clear();
		rep(i,1,n+1) vis[i]=0,level[i]=0;
		rep(i,1,n+1)
			adj[i].clear();
	}



	return 0;
}