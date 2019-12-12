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
	int n,x; cin>>n; int cnt=0,ans=0,mx=-1;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>x;
		if(x==mx){
			cnt++;
			mx=x;
		}
		else if(x>mx){
			cnt=1; ans=1;
			mx=x;
		}
		else{
			ans=max(cnt,ans);
			cnt=0;
		}
	}
	ans=max(cnt,ans);
	cout<<ans;
	

	return 0;
}	