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
	int t;
	cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n-1], cnt[n+1];
		memset(cnt,0,sizeof(cnt));
		memset(a,0,sizeof(a));
		for(int i=0;i<n-1;i++){
			cin>>a[i];
			cnt[a[i]]++;
		}
		for(int i=1;i<=n;i++){
			if(cnt[i]==0){
				cout<<i<<endl;
				break;
			}
		}
		//error(t)
	}
	return 0;
}	