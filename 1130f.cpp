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
vector<int>a[150005];
bool vis[150005];

int main()
{
	io;
	int n; cin>>n;
	int x,y,start;
	memset(vis,false,sizeof(vis));
	for(int i=0;i<n-1;i++){
		cin>>x>>y;
		a[x].pb(y);a[y].pb(x); 
		if(i==0) start=x;
	}

	queue<int> q;
	q.push(start); vector<int> v;

	while(!q.empty()){
     int t= q.front(); q.pop();
     v.pb(t); vis[t]=true;
     for(int i=0;i<a[t].size();i++){
     	int z= a[t][i];
     	if(vis[z]==false)q.push(z);
     	vis[z]=true;
      }
	}
	for(int i=1;i<=n;i++){
		if(!vis[i]){
	q.push(i); 
	while(!q.empty()){
     int t= q.front(); q.pop();
     v.pb(t); vis[t]=true;
     for(int i=0;i<a[t].size();i++){
     	int z= a[t][i];
     	if(vis[z]==false)q.push(z);
     	vis[z]=true;
      }
	}
		}
	}
for(auto it: v) cout<<it<<" ";

	return 0;
}	