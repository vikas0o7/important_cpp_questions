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
		ll n,a; ll pos=0, neg=0,zero=0;
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>a;
			if(a>0) ++pos;
			else if(a<0) ++neg;
			else ++zero;
		}
		cout<< max(zero+pos, zero+neg)<<" "<< min(pos,neg)<<endl;

	}
	return 0;
}	