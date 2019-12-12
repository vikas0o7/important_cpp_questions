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
int cnt=0,ans=0,l;
int main()
{
	io;
	int n; cin>>n;
	int a[105];
	for(int i=0;i<n;i++) cin>>a[i];
	if(a[1]==2){
		ans=1; cnt=1; l=0;
	}	
	for(int i=0;i<n-2;i++){
		if(a[i+2]-a[i]==2) {
			cnt++;
			
		}
		else{
			cnt=0;
		}
		if(cnt>=ans){
			ans=cnt;
			l=i+1;
		}
		//error(i,cnt)
	}
	if(a[n-2]==999 && l==n-2) ans++;
	cout<<ans;
	return 0;
}	