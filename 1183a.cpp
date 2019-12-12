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
	int q; cin>>q;
	while(q--){
		ll n,k,a,b;
		cin>>k>>n>>a>>b;
		k-=n*a;
		if(k>0) {
			cout<<n<<endl;
		}
		else{
			k=-k;
			++k;
			ll diff=a-b;
			ll turns= (k+diff-1)/diff;
			if(turns>n){
				cout<< -1<<endl;
			}
			else cout<< n-turns<<endl;
		}
	}
	return 0;
}	