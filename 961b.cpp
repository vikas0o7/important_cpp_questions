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
	int n,k; cin>>n>>k;
	vector<int> a(n,0); vector<int> b(n,0); int ans=0;
	vector<int> pre(n,0);
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
		if(b[i]==1){
			ans+=a[i];
			a[i]=0;

		}
		//error(ans)
	}
	pre[0]=a[0];
	for(int i=1;i<n;i++){
		pre[i]=pre[i-1]+a[i];
		//error(pre[i])
	}
	int mx=pre[k-1];
	for(int i=k;i<n;i++){
		mx= max(mx, pre[i]-pre[i-k]);
		//error(mx)
	}
	cout<< ans+mx;
	return 0;
}	