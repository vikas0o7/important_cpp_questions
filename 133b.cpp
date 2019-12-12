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
	string s; cin>>s;
	map<char,string> m;
	m['>']="1000";m['<']="1001";m['+']="1010";m['-']="1011";
	m['.']="1100";m[',']="1101";m['[']="1110";m[']']="1111";
	string t;
	for(int i=0;i<s.length();i++){
		t+= m[s[i]];
	}
	const int mod= 1e6+3;
	int n= t.length();
	ll p=1,ans=0;
	for(int i= n-1;i>=0;i--){
		ans= (ans+int(t[i]-'0')*p%mod)%mod;
		p=p*2%mod;
	}
	cout<<ans;
	return 0;
}	