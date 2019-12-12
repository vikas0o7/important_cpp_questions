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
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int graph[n][n];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>> graph[i][j];
			}
		}
		int s=0;
		vector<int> vertex;
		for(int i=0;i<n;i++){
			if(i!=s) vertex.pb(i);
		}
		int min_path= INT_MAX;
		do{
			int temp= 0;
			int k=s;
			for(int i=0;i<vertex.size();i++){
				temp+=graph[k][vertex[i]];
				k=vertex[i];
			}
			temp+=graph[k][s];
			min_path= min(min_path, temp);
		}
		while(next_permutation(vertex.begin(),vertex.end()));
		cout<< min_path<<endl;
	}
	return 0;
}	