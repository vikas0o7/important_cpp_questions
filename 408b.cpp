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
	string s,t;
	cin>>s;
	map<char,int> m;
	for(int i=0;i<s.length();i++){
		m[s[i]]++;
	}
	cin>>t;
	int ans=0;
	for(int i=0;i<t.length();i++){
		if(m.find(t[i])==m.end()){
			cout<<-1; return 0;
		}
		if(m[t[i]]>0){
			ans++;
			m[t[i]]--;
		}
	}
	cout<<ans;
	//else cout<<-1;
	return 0;
}	