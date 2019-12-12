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
int parent[200005],sz[200005];
int find(int u){
	if(u==parent[u]) return u;
	else return parent[u]=find(parent[u]);
}
void merge(int a, int b) {
    a = find(a);
    b = find(b);
    if (a != b) {
        parent[b] = a;
        sz[a] += sz[b];
    }
}
int main()
{
	io;
	int q; cin>>q;
	while(q--){
		int n; cin>>n;
		
		for(int i=1;i<=n;i++){
			parent[i]=i;
			sz[i]=1;
		}
		for(int i=1;i<=n;i++){
			int x;cin>>x;
			merge(i,x);
		}
		for(int i=1;i<=n;i++){
			cout<< sz[find(i)]<<" "; // need to find root again after all the mergers.
		}
		cout<<endl;

	}
	return 0;
}	