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
		int req=0, ans=0,ones=0, odd_strings=0;;
		while(n--){
			string s;
			cin>>s;
			int m=s.length();
			ones=0;
			if(m%2==1){
				odd_strings++;
			}
			else{
				for(int i=0;i<m;i++){
					if(s[i]=='1') ones++;
				}
				//error(ones)
				if(ones%2==1) req++;
				else ans++;
			}
		}
			if(req%2==0 || odd_strings>0) ans+=req;
			else{
				ans+=req-1;
			}
			ans+=odd_strings;
			cout<<ans<<endl;
	}
	return 0;
}	