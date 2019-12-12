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
int n, a[100005],q, pre[100005],l,r;
int main()
{
	io;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		pre[i]= pre[i-1]+a[i];
	}
	cin>>q;
	while(q--){
		cin>>l>>r;
		cout<< (pre[r]-pre[l-1])/10 <<'\n';
	}
	return 0;
}	