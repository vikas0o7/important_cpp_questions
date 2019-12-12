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
int mxp[200005];
int main()
{
	io;
	int t; cin>>t; 
	while(t--){
		int n,x,y; cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		int m; cin>>m;
		//vector<pair<int,int> > v;
		fill_n(mxp, n+1, 0);
		for(int i=0;i<m;i++){
			cin>>x>>y;
			//v.pb({x,y});
			mxp[y]= max(mxp[y],x);
		}	
		for(int i=n-1;i; --i){
			mxp[i]= max(mxp[i], mxp[i+1]);
			//error(mxp[i],i)
		}
		int i=0, flag=1, ans=0;
		while(i<n){
			int cnt=0,mx=-1;
			while(i+cnt<n){
				int j= i+ cnt;
				 mx= max(mx, a[j]);
				if(mxp[cnt+1]>=mx){
					++cnt;
				}
				else break;
			}
			if(cnt==0){
				flag=0; break;
			}
			i+=cnt;
			++ans;
		}
		if(flag==0) ans=-1;
		cout<<ans<<endl;
		//cout<< mxp[6]<<endl;
		
	}
	return 0;
}	