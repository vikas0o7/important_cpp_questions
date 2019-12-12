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
stack<int> stack;
void topological_sort(int u){
	vis[u]=true;
	for(int i=0;i<adj[u].size();i++){
		int x= adj[u][i];
		if(!vis[x]) dfs(x);
	}
	stack.push(u);
}
int main()
{
	io;
	vector<int> adj[10001];
	topological_sort(1);
	while(!stack.empty()){
		cout<< stack.top()<<" ";
		stack.pop();
		//cout<<endl;
	}
	cout<<endl;

	return 0;
}	