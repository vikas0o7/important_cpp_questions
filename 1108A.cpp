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
		int l1,r1,l2,r2; cin>>l1>>r1>>l2>>r2;
		//error(l1,r1,l2,r2)
		cout<< l1<<" ";
		if(l2!=l1) cout<<l2;
		else cout<< r2;
		cout<<'\n';
	}
	return 0;
}	