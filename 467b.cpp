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
	int n,m,k;
	cin>>n>>m>>k;
	int a[m+1];
	for(int i=0;i<m;i++) cin>>a[i];
		cin>>a[m];
	int cnt=0;
	for(int i=0;i<m;i++){
		if(__builtin_popcount(a[i]^a[m])<=k) cnt++;
	}
	cout<< cnt;
	return 0;
}	