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
//int last[200005];
int main()
{
	io;
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		//int last[200005];
		vector<int> last(200005,-1);
		int ans=INT_MAX;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(last[a[i]]==-1){
				last[a[i]]=i;
			}
			else{
				ans=min(ans, i-last[a[i]]+1);
				last[a[i]]=i;
			}
		}
		if(ans==INT_MAX) ans=-1;
		cout<<ans<<endl;
	}
	return 0;
}	